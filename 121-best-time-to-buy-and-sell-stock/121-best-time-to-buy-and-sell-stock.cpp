class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
       int minbuy=INT_MAX;
        int maxsale=0;
        for(int i=0;i<n;i++){
            int currbuy=prices[i];
            if(currbuy<minbuy)minbuy=currbuy;
            else if(currbuy-minbuy>maxsale)
                maxsale=currbuy-minbuy;
        }
        return maxsale;
    }
};