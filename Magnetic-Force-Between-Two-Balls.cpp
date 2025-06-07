class Solution {
public:
    int maxDistance(vector<int>& position, int m) {

        int n = position.size();

        // If we have fewer positions than balls, it's not possible
        if (m > n) return -1;

        // Sort the positions to apply binary search logic correctly
        sort(position.begin(), position.end());

        // Minimum possible distance is 1, maximum is the distance between first and last position
        int s = 1;
        int e = position[n - 1] - position[0];

        int ans = 0; // To store the best possible answer (maximum minimum distance)

        // Binary search over the answer space (distance)
        while (s <= e) {
            int mid = s + (e - s) / 2; // Try placing balls with at least 'mid' distance apart

            bool isPossible = false; // Will become true if placement is possible

            int ballPlaced = 1;               // Place the first ball at the first position
            int lastPos = position[0];        // Track the last placed ball's position

            for (int i = 1; i < n; i++) {     // Start from second position
                // Check if we can place a ball at current position with at least 'mid' distance
                if (position[i] - lastPos >= mid) {
                    ballPlaced++;
                    lastPos = position[i];    // Update last position

                    // If we've placed all 'm' balls successfully, break early
                    if (ballPlaced >= m) {
                        isPossible = true;
                        break;
                    }
                }
            }

            // If placement was successful, try to increase the minimum distance
            if (isPossible) {
                ans = mid;     // Update answer
                s = mid + 1;   // Try for a larger distance
            } else {
                e = mid - 1;   // Try for a smaller distance
            }
        }

        return ans; // Final answer: largest minimum distance possible
    }
};
