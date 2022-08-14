class Solution {
public:
    bool isVowel(char c){
        char ch[]={'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<10;i++){
            if(ch[i]==c)return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        while(i<j){
            if(isVowel(s[i])&& isVowel(s[j])){
                swap(s[i++],s[j--]);
            }
            else if(!isVowel(s[i]))i++;
            else if(!isVowel(s[j]))j--;
        }
               return s;
    }
};