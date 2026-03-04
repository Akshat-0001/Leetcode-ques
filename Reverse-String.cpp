1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4
5        int start=0;
6        int end=s.size()-1;
7
8        while(start<end){
9
10            swap(s[start], s[end]);
11            start++;
12            end--;
13        }
14        
15    }
16};