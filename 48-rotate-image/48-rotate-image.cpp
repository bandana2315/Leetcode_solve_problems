class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        for(int j=0;j<row;j++){
            for(int i=0;i<j;i++){
                swap(matrix[j][i],matrix[i][j]);
            }
        }
        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};