class Solution {
private:
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')) {
            return 1;
        }
        return 0;
    }

public:
    bool isPalindrome(string s) {

        // faltu hatane keliye
        string filtered = \\;
        for (char c : s) {
            if (valid(c)) {
                filtered += tolower(c); // Convert to lowercase before adding
            }
        }

        int start = 0;
        int end = filtered.length()-1;

        while (start < end) {
            if (filtered[start] != filtered[end]) {
                return 0;
            } else {
                start++;
                end--;
            }
        }
        return 1;
    }
};