class Solution {
public:
    string sumofdigit(string st){
        int sum=0;
        for(auto ch:st){
            sum+=ch-'0';
        }
        return to_string(sum);
    }
    string digitSum(string s, int k) {
        while(s.length()>k){
            string temp;
            for(int i=0;i<s.length();i=i+k)
                temp+=sumofdigit(s.substr(i,k));
              s=temp;
        }
        return s;
    }
};