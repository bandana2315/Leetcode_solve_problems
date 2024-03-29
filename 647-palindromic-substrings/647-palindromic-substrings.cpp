class Solution {
public:
    bool ispallindrome(string s){
       int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int n=s.size();
        
        int count=0;
        for(int i=0;i<n;i++){
            string str="";
            for(int j=i;j<n;j++){
                str+=s[j];
            if(ispallindrome(str))
                count++;
            }
        }
       return count; 
    }
};