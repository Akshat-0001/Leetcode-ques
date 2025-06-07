class Solution {
public:

    bool isVowel(char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; }

    int maxVowels(string s, int k) {
        int count=0, maxCount=0;

        for(int j=0; j<s.size();j++){
            if(isVowel(s[j])) count++;

            if(j>=k){
                if(isVowel(s[j-k])) count--;
            }

            maxCount= max(maxCount, count);
        }
        return maxCount;

        }

    };

