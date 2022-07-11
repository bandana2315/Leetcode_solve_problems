class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
         unordered_map<string,int>count;
        string str="";
        for(int i=0;i<paragraph.length();i++){
            if(paragraph[i]==' ' ||paragraph[i]==','){
                if(str!="")
                count[str]++;
                str.clear();
            }
            else if(isalpha(paragraph[i])){
            str+=tolower(paragraph[i]);    
            }
        }
         count[str]++;
        for(int i=0;i<banned.size();i++){
            if(count.find(banned[i])!=count.end())
                count.erase(count.find(banned[i]));
        }
        int max=INT_MIN;
        string s;
        for(auto i:count){
            if(i.second>max){
                max=i.second;
                s=i.first;
            }
        }
        return s;
    }
};