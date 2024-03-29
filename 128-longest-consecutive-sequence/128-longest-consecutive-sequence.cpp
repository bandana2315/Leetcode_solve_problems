class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
         if(n==0)return 0;
        if(n==1)return 1;
        sort(nums.begin(),nums.end());
        
        int prev=nums[0];
       
        int ans=1;
        int cur=1;
        for(int i=1;i<n;i++){
            if(nums[i]==prev+1)cur++;
            else if(nums[i]!=prev){
                cur=1;
            }
            
            prev=nums[i];
            ans=max(ans,cur);
        }
        return ans;
    }
};