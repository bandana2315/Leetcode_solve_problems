class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            int mx=INT_MIN, mi=INT_MAX;
            for(int j=i;j<n;j++){
                mx=max(mx,nums[j]);
                mi=min(mi,nums[j]);
                
                sum+=mx-mi;
            }
        }
        return sum;
    }
};