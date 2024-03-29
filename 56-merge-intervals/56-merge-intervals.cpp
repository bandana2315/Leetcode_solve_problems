class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
      vector<vector<int>>result;
        int n=intervals.size();
        if(n==0)return result;
        vector<int>temp=intervals[0];
        for(auto it:intervals){
            if(it[0]<=temp[1]){
                temp[1]=max(it[1],temp[1]);
                
            }
            else{
              result.push_back(temp);
                temp=it;
            }
        }
         result.push_back(temp);
        return result;
    }
};