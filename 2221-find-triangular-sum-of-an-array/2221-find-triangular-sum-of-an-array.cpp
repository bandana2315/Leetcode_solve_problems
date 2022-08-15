class Solution {
public:
   
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        int s=n;
       while(s!=1){
           for(int i=0;i<n-1;i++){
               nums[i]=(nums[i]+nums[i+1])%10;
           }
           s--;
       }
        return nums[0];
    }
};