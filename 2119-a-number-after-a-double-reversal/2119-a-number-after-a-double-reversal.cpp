class Solution {
public:
    
    bool isSameAfterReversals(int num) {
        vector<int>v;
        if(num==0)return true;
        int sum=0;
        while(num>0){
            int sum=num%10;
            num=num/10;
          v.push_back(sum);
        }
        reverse(v.begin(),v.end());
       int n=v.size();
        if(v[n-1]==0)
            return false;
        return true;
        }
};