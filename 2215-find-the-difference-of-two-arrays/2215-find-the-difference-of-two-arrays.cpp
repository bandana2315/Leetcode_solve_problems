class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result;
        vector<int>first;
        vector<int>second;
        int n1=nums1.size();
        int n2=nums2.size();
        map<int,int>freq1;
        map<int,int>freq2;
        for(int i=0;i<n1;i++){
            freq1[nums1[i]]++;
        }
        for(int i=0;i<n2;i++){
            freq2[nums2[i]]++;
        }
        for(int i=0;i<n1;i++){
            if(freq2[nums1[i]]==0){
                first.push_back(nums1[i]);
                  freq2[nums1[i]]++;
            }
        }
        result.push_back(first);
        
         for(int i=0;i<n2;i++){
            if(freq1[nums2[i]]==0){
                second.push_back(nums2[i]);
                freq1[nums2[i]]++;
            }
        }
       result.push_back(second);
        return result;
    }
};