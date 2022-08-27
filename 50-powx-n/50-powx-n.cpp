class Solution {
public:
    double myPow(double x, int n) {
       double ans=1.0;
        if(n==0)return 1;
        else if(abs(x)==1 && n%2==0) return abs(x);
        else if(abs(x)==1 && n%2!=0) return (x);
        if(n>0){
        while(n!=0){
             ans=ans*x;
            if(ans==0)return 0;
            n--; 
        }
        }
        else{
            while(n!=0){
            ans=(1/x)*ans;
            n++;
            }
        }
        return ans;
    }
};