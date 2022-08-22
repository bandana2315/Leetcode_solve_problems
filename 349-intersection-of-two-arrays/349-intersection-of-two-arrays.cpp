class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
         sort(nums2.begin(),nums2.end());
        vector<int>v;
        
        int n1=nums1.size();
        int n2=nums2.size();
      for(int i=0;i<n2;i++){
         for(int j=0;j<n1;j++) {
             if(nums2[i]==nums1[j])
                 v.push_back(nums2[i]);
         }
      }
     v.erase(unique(v.begin(), v.end()), v.end());   
        
        return v;
    }
};