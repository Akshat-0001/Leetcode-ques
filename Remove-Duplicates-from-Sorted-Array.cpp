1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int i;
5        int j=1;
6        int n=nums.size();
7        
8        for(i=1; i<n; i++){
9            if(nums[i]!=nums[j-1]){
10                nums[j]=nums[i];
11                j++;
12            }
13        }
14        return j;
15
16        };
17        
18    };