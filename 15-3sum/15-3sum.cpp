class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> v; 
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i==0||i>0 &&nums[i-1]!=nums[i]){
           int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[j]+nums[k];
                if(sum==-nums[i]){
                int x=nums[j++];
                int y=nums[k--];
                v.push_back({nums[i],x,y});
                while(j<k && nums[j]==x)j++;
                while(j<k && nums[k]==x)k--;
                }
                else if(sum>-nums[i])k--;
                else if(sum<-nums[i])j++;
            
        } 
        }
        }
        
        return v;
    }
};























