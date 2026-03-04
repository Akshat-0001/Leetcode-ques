1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        
5        int n= nums.size();
6        int left=0;
7        int right=n-1;
8
9        vector<int> result(n);
10        int pos= n-1;
11
12        while(left<=right){
13            int leftsq= nums[left]*nums[left];
14            int rightsq= nums[right]*nums[right];
15
16            if(leftsq>rightsq){
17                result[pos]=leftsq;
18                left++;
19            }
20            else{
21                result[pos]=rightsq;
22                right--;
23            }
24            pos--;
25        }
26        return result;
27
28    }
29};