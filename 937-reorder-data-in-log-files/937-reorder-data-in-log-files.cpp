class Solution {
public:
    static bool compare(string &str1, string &str2){
        int n1=str1.size();
        int n2=str2.size();
        string k1="";
        string k2="";
        string v1="";
        string v2="";
        int i=0;
        while(i<n1 && str1[i]!=' '){
            k1+=str1[i];
            i++;
        }
        i++;
        while(i<n1){
            v1+=str1[i];
            i++;
        }
         int j=0;
        while(j<n2 && str2[j]!=' '){
            k2+=str2[j];
            j++;
        }
        j++;
        while(j<n2){
            v2+=str2[j];
            j++;
        }
        if(v1==v2){
            return k1<k2;
        }
        else{
            return v1<v2;
        }
    }
    vector<string> reorderLogFiles(vector<string>& logs) {
         int n=logs.size();
        vector<string>letter;
        vector<string>digit;
        
       for(int i=0;i<n;i++){
           string str=logs[i];
           if(isalpha(str[str.size()-1])){
               letter.push_back(str);
           }
           else{
               digit.push_back(str);
           }
             
       }
        sort(letter.begin(),letter.end(),compare);
     int k=0;
        for(int i=0;i<letter.size();i++){
            logs[k++]=letter[i];
        }
       for(int i=0;i<digit.size();i++){
            logs[k++]=digit[i];
        }
          return logs;  
    }
};