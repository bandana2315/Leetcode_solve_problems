class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
       int n=arr.size();
        for(int i=0;i<n;i++)
        arr[i]+=10001*__builtin_popcount(arr[i]);
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        arr[i]=arr[i]%10001;
        return arr;
    }
};