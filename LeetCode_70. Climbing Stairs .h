//
// Created by FNU Shariful on 7/2/22.
//

#ifndef LEETCODE_LEETCODE_70_CLIMBING_STAIRS_H
#define LEETCODE_LEETCODE_70_CLIMBING_STAIRS_H

#include "vector"
#include "iostream"
#include "cstring"

using namespace std;

long n;
long dp[50];
long cntStair(long val) {
//    cout << val << " " << n << endl;
    if (val == n) return 1;
    long step1 = 0, step2 = 0;
    if( dp[val] != -1 ) return dp[val];
    if (val + 1 <= n) {
//        cout << "val "<<val <<" step1 " << step1 << endl;
        step1 = cntStair(val + 1);
//        cout << "val "<<val <<" step1 " << step1 << endl;
    }
    if (val + 2 <= n) {
//        cout << "val "<<val <<" step2 " << step2 << endl;
        step2 = cntStair(val + 2);
//        cout << "val "<<val <<" step2 " << step2 << endl;
    }
//    cout<<step1+step2<<endl;
    return dp[val]=step1 + step2;
}

long climbStairs(long m) {
    n=m;
    memset(dp,-1,sizeof dp);
    cntStair(0);
//    for( long i=0; i<n; i++ ) cout<<dp[i]<<" ";
//    cout<<endl;
    return dp[0];
}

#endif //LEETCODE_LEETCODE_70_CLIMBING_STAIRS_H
