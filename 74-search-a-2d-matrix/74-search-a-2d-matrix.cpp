class Solution {
public:
    bool findelement(vector<int>v,int target){
        int start=0;
        int end=v.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(v[mid]==target)return true;
            else if(v[mid]>target)end--;
            else start++;
        }
       return false;  
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>v;
        bool ans;
      int row=matrix.size();
        for(auto i:matrix){
             v=i;
            ans=findelement(v,target);
            if(ans==true)break;
        }
        return ans;
    }
};