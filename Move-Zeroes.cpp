1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4
5        int n= nums.size();
6        int NonZeroPos =0;
7
8        for(int i=0; i<n; i++){
9            if(nums[i]!=0){
10                swap(nums[i], nums[NonZeroPos]);
11                NonZeroPos++;
12            }
13        }
14        
15    }
16};