class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=nums.size();
        int s=n;
        while(s!=1){
            for(int i=0;i<n/2;i++){
                if(i%2==0){
                    nums[i]=min(nums[2*i],nums[2*i+1]);
                }
                else{
                    nums[i]=max(nums[2*i],nums[2*i+1]);
                }
            }
            s--;
        }
        return nums[0];
    }
};