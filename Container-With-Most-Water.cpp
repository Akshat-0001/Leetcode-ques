1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left=0;
5        int right=height.size()-1;
6        int res=0;
7
8        while(left<right){
9            int area= (right-left)* (min(height[left], height[right]));
10            res = max(res, area);
11
12            if(height[right]>height[left]) left++;
13            else right--;
14        }
15        return res;
16    }
17};