class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count=1;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==1 ||n==2)return nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1])
                count++;
            else {
                if(count>n/2)return nums[i];
               count=1;
            }
            }
        
        return -1;
    }
};