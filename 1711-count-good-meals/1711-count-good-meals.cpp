class Solution {
public:
    int countPairs(vector<int>& d) {
       int n=d.size();
        unordered_map<int,int>meal;
        int ans=0;
        int mod=1000000007;
        sort(d.begin(),d.end());
        for(auto x:d){
            int z=1;
            for(int j=0;j<=21;j++){
                int y=z-x;
                if(y>x)break;
                ans=ans+meal[y];
                ans=ans%mod;
                z=z*2;
            }
            
            meal[x]++;
        }
        return ans;
    }
};