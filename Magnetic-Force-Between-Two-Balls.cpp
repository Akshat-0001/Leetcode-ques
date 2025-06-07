class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        
        int n= position.size();
        if(m>n) return -1;
        sort(position.begin(), position.end());

        int s=1;
        int e= position[n-1] - position[0];
        int ans=0;
        while(s<=e){
            int mid= s+ (e-s)/2;

            bool isPossible =false;

            int ballPlaced =1;
            int lastPos = position[0];

            for(int i=0; i<position.size(); i++){
                if(position[i]-lastPos >= mid){
                    ballPlaced++;
                    lastPos= position[i];
                }
                if(ballPlaced>=m) isPossible = true;
                else isPossible = false;
            }


            if(isPossible){
                ans=mid;
                s=mid+1;
            }
            else e=mid-1;
        }
        return ans;
    }
};