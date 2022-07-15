class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
     unordered_map<char,char>char_map1;
        unordered_map<char,char>char_map2;
     int n=s.size(),i=0;
        while(i<n){
            char c=t[i];
            char d=s[i];
            if(char_map1.count(c)!=char_map2.count(d))return false;
            if(char_map1.count(c)){
                if(char_map2[d]!=c ||char_map1[c]!=d)return false;
            }
            else
            {
                char_map1.insert({c,d});
                char_map2.insert({d,c});
            }
            i++;
        }
        return i==n;
    }
};