1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int front=0;
5        int back= numbers.size()-1;
6
7        while(front<back){
8            if(numbers[front]+numbers[back] == target) return {front+1, back+1};
9            else if(numbers[front]+numbers[back] > target) back--;
10            else front++;
11        }
12        return {};
13    }
14};