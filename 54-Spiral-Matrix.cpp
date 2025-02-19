class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         
         vector<int> ans;

        int i;
         int row=matrix.size();
         int col= matrix[0].size();
         int count=0;
         int total=row*col;
         int startingrow=0;
         int startingcol=0;
         int endingrow= row-1;
         int endingcol= col-1;

         while(count<total){

            //print starting row
             for(i=startingcol; i<=endingcol && count<total; i++){
                ans.push_back(matrix[startingrow][i]);
                count++;
             }
             startingrow++;
             //print ending col
             for(i=startingrow; i<=endingrow && count<total; i++){
                ans.push_back(matrix[i][endingcol]);
                count++;
             }
             endingcol--;

             //printing ending row
             for(i=endingcol; i>=startingcol && count<total;i--){
                ans.push_back(matrix[endingrow][i]);
                count++;
             }
             endingrow--;

             //printing starting col
             for(i=endingrow; i>=startingrow && count<total; i--){
                ans.push_back(matrix[i][startingcol]);
                count++;
             }
             startingcol++;

         } 
         return ans;
        
    }
};