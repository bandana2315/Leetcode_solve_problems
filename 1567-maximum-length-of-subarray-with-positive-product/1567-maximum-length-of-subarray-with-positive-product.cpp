class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n=nums.size();
         int res=0,pos=0,neg=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                pos=neg=0;
            }
            else if(nums[i]>0){
                pos+=1;
                if(neg!=0){
                    neg+=1;
                }
                res=max(res,pos);
            }
            else{
                swap(pos,neg);
                neg+=1;
                if(pos!=0){
                    pos+=1;
                }
                res=max(res,pos);
            }
        }
        return res;
    }
};