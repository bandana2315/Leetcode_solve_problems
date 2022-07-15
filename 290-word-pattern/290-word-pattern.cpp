class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<string,char>word_map;
        unordered_map<char,string>char_map;
        int n=pattern.size();
        int i=0;
        stringstream str(s);
        string word;
        while(str >> word){
            if(i==n)return false;
            char c=pattern[i];
            if(char_map.count(c)!=word_map.count(word))return false;
            if(char_map.count(c)){
                if((word_map[word]!=c) ||(char_map[c]!=word))
                    return false;
            }
            else{
                char_map.insert({c,word});
                 word_map.insert({word,c});

            }
            i++;
        }
return i==n;
    }
};