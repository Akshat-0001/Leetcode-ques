class Solution {
public:
    void reverseString(vector<char>& s) {
        
    for (char c : s) {
        string filtered = \\;

        if (isalnum(c)) {
            filtered = tolower(c);
        }
    }
        int n = s.size();
        int start = 0;
        int end = n - 1;

        while (start < end) {
            swap(s[start++], s[end--]);
        }
    }
};