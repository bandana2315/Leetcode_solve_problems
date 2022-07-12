class Solution {
public:
    string longestPalindrome(string s) {
        int maxlen=1,start=0;
        int len=s.length();
        string str="";
        for(int i=0;i<len;i++){
            int low=i-1;
            int high=i+1;
            while(high<len && s[high]==s[i])
                high++;
             while(low>=0 && s[low]==s[i])
                low++;
             while(high<len && low>=0 && s[low]==s[high]){
                 low--;
                  high++;
             }
          int length=high-low-1;
            if(maxlen<length){
                maxlen=length;
                start=low+1;
            }
        }
        str=s.substr(start,maxlen);
        return str;
    }
};