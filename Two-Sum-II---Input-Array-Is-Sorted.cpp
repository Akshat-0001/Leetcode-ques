1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4
5        int n= numbers.size();
6
7        int left=0;
8        int right=n-1;
9
10        while(left<right){
11            if(numbers[left]+numbers[right]==target) return {left+1, right+1};
12
13        else if(numbers[left]+numbers[right]>target) right--;
14        else left++;
15        }
16
17        return {};
18        
19    }
20};