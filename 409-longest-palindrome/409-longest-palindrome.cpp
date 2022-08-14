class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>counts;
        for(char c:s)counts[c]++;
        int res=0;
        bool odd_found=false;
        for(auto c: counts){
            if(c.second%2==0)res+=c.second;
            else{
                odd_found=true;
                res+=c.second-1;
            }
        }
        if(odd_found)res++;
        return res;
    }
};