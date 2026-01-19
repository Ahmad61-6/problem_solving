#include<vector>
#include<algorithm>
using namespace std;
int maxProfit(vector<int>& prices){
        vector<pair<int,int>> price_with_index;
        for(int i = 0 ; i<prices.size();i++){
            price_with_index.push_back({prices[i],i});
        }
        sort(prices.begin(),prices.end());

        int left = 0;
        int right = prices.size()-1;

        while(left < right){
            int sellPrice = prices[left] - prices[right];
            if(price_with_index[left].second < price_with_index[right].second ){
                return sellPrice;
            }
            else{
                right--;
            }
        }
        return 0;

    }
    int main(){
        vector<int> prices = {7,1,5,3,6,4};
        int result = maxProfit(prices);
        return 0;
    }