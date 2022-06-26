//
// Created by FNU Shariful on 26/06/22.
//
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#ifndef LEETCODE__121BESTTIMETOBUYANDSELLSTOCK_H
#define LEETCODE__121BESTTIMETOBUYANDSELLSTOCK_H

#include "iostream"
#include "vector"
using namespace std;

class _121BestTimetoBuyandSellStock {
public:
    int maxProfit(vector<int> &prices) {
        int mx = -1, mi = INT_MAX, dif;
        for( int i=0; i<prices.size(); i++ )
        {
            if( mi > prices.at(i) )
            {
                mi = prices.at(i);
            }
            dif = prices.at(i) - mi;
            if( mx < dif )
            {
                mx = dif;
            }
        }
        cout<<mx<<endl;
    }
};


#endif //LEETCODE__121BESTTIMETOBUYANDSELLSTOCK_H
