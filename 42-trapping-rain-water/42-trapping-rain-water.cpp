class Solution {
public:
    int trap(vector<int>& height) {
       int cur=0;
        int n=height.size();
        if(n==0)
            return 0;
        int left[n],right[n];
        for(int i=0;i<n;i++){
            cur=max(height[i],cur);
            left[i]=cur-height[i];
        }
        cur=0;
        for(int i=n-1;i>=0;i--){
         cur=max(height[i],cur);
            right[i]=cur-height[i];
           
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=min(left[i],right[i]);
        }
        return sum; 
    }
};