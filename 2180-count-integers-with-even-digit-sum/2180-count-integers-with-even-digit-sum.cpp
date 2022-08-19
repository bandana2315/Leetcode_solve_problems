class Solution {
public:
    int addEvenDigit(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
        
    
    int countEven(int num) {
        int i=1;
         int count=0;
        while(i<=num){
           
            if(addEvenDigit(i)%2==0){
                count++;
            }
            i++;
        }
        return count;
            }
};