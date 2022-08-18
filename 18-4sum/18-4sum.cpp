class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long target) {
  vector<vector<int>> ans;
int n = nums.size();
sort(nums.begin(),nums.end());
int left ;
int right;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
    long long sum =target-(nums[i]+nums[j]);
    left = j+1;
    right=n-1;
while(left<right){
int sum2=nums[left]+nums[right];
    if(sum2>sum) right--;
else if(sum2<sum) left++;
    
else {
    vector<int>neww(4,0);
    neww[0]=nums[i];
    neww[1]=nums[j];
    neww[2]=nums[left];
    neww[3]=nums[right];
ans.push_back(neww);
    
    while(left<right && nums[left]==neww[2])
left++;
     while(left<right && nums[right]==neww[3])
    right--;
}
}
    while(j+1<n && nums[j+1]==nums[j])
        j++;
}
    while(i+1<n && nums[i+1]==nums[i])
        i++;
}
          
    return  ans;
    }
};