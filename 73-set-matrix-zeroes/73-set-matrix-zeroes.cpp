class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int cols=matrix[0].size();
        int rows=matrix.size();
    vector<int>row_arr(rows,1);
    vector<int>col_arr(cols,1);
        
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
           if(matrix[i][j]==0){
               row_arr[i]=0;
               col_arr[j]=0;
           } 
        }
    }
    
    for(int i=0;i<rows;i++){
        if(row_arr[i]==0){
        for(int j=0;j<cols;j++){
        matrix[i][j]=0;
        }
    }
    }
    
    for(int i=0;i<cols;i++){
        if(col_arr[i]==0){
        for(int j=0;j<rows;j++){
        matrix[j][i]=0;
        }
    }
    }
        
    }
};