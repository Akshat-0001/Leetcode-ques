1class Solution {
2public:
3    bool isPalindrome(string s) {
4
5        string filtered;
6
7        for(char c: s){
8            if(isalnum(c)) filtered += tolower(c);
9        }
10
11        int left=0;
12        int right=filtered.size()-1;
13
14        while(left<right){ 
15            if(filtered[left]!=filtered[right]) return false;
16            else{ 
17                left++;
18                right--;
19            }
20        }
21
22    return true;
23
24        
25    }
26};