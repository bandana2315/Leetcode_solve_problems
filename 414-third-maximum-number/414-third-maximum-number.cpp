class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
if(n==1)
return nums[0];
if(n==2)
return max(nums[0],nums[1]);
sort(nums.begin(),nums.end(),greater());
int count=1,i;
for(i=0;i<n-1;i++)
{
if(nums[i]!=nums[i+1])
count++;
if(count==3)
break;

    }
    if(count<3)
        return nums[0];
    else return nums[i+1];
}
    
};