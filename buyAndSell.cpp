#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
        vector<int> profitArray;
        int maxElm;

        for( size_t i{}; i< prices.size(); i++ ){
            if( i+1 < prices.size()){
                maxElm = *max_element(prices.begin()+i+1, prices.end());
                if( maxElm <= prices.at(i) ){ // profit either -ve or 0
                    continue;
                }
                else{
                    profitArray.push_back(maxElm - prices.at(i));
                }
            }
        }
        if(profitArray.size() == 0) 
            return 0;

        int maxProf{*max_element(profitArray.begin(), profitArray.end())};

        if( maxProf <= 0 )
            return 0;
        else
            return maxProf;
}

int main () {
    vector<int> prices = {7,6,4,3,1};

    cout << maxProfit(prices) << endl;

    return 0;
}