class Solution {
public:
    bool isPerfectSquare(int num) {
        long sum=0;
        if(num==1)return true;
        for(int i=1;i<num,sum<num;i++){
            sum=sum+(2*i-1);
        if(sum==num)return true;
        }
        return false;
    }
};