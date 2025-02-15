class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int>map;
        unordered_set<int>set;
        int i, j;

        for(auto i: arr){
            map[i]++;
        }

        for(auto j:map){
            int freq= j.second;
            set.insert(freq);
        }

        return map.size()==set.size();
    }
};