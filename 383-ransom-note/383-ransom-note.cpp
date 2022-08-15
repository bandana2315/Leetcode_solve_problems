class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>rmap;
        unordered_map<char,int>mmap;
         for(int i=0;i<ransomNote.length();i++)
        rmap[ransomNote[i]]++;
        for(int i=0;i<magazine.length();i++)
        mmap[magazine[i]]++;
       
        for(auto e:rmap){
           
                if(rmap[e.first]>mmap[e.first]){
            return false;
            
        }
        }
        return true;
    }
};