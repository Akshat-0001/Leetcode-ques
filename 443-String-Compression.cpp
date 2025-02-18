class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansindex=0;
        int n=chars.size();

        while(i<n){
            int j=i+1;

            while(j<n && chars[i]==chars[j]){
                j++;
            }
            /* yaha tb aoge jab
            ya toh vector poora traverse krdia 
            ya fer new/diff char encounter kia hai
            */

            //oldchar store krlo
            chars[ansindex++]=chars[i];

            int count = j-i;

            if(count>1){
                //converting counting into single digit and savinf inanswer
                string cnt=to_string(count);
                for(char ch:cnt){
                    chars[ansindex++]=ch;
                }
            }
            //moving to new/diff char
            i=j;
        }
        return ansindex;
        
    }
};