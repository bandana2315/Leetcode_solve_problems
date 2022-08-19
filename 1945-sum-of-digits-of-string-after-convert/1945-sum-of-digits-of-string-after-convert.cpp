class Solution {
public:
    int addDigit(int num){
        int sum=0;
        while(num>0){
        sum+=num%10;
        num=num/10;
        }
        return sum;
    }
    
    int change(string s){
        int temp=0;
        int num=0;
        for(int i=0;i<s.size();i++){
            temp=0;
            temp=s[i]-96;
            if(temp>9)temp=addDigit(temp);
            num+=temp;
        }
        return num;
    }
    int getLucky(string s, int k) {
        int ans=0;
      if(k==1)return change(s);
         ans=change(s);
        while(k>1){
            ans=addDigit(ans);
                k--;
        }
        return ans;
    }
    
};