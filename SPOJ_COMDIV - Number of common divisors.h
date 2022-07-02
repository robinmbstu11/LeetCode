//
// Created by FNU Shariful on 7/2/22.
//

//https://www.spoj.com/problems/COMDIV/

#ifndef LEETCODE_SPOJ_COMDIV_NUMBER_OF_COMMON_DIVISORS_H
#define LEETCODE_SPOJ_COMDIV_NUMBER_OF_COMMON_DIVISORS_H
#include<bits/stdc++.h>

int N = 1000000;
int NOD[1000009];

using namespace std;
void totalNOD() {
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            NOD[j]++;
        }
    }
}

int main() {
    totalNOD();
    int T,n,m;
    scanf("%d",&T);
    while (T--) {
        scanf("%d%d",&n,&m);
        printf("%d\n",NOD[__gcd(n, m)]);
    }
}

#endif //LEETCODE_SPOJ_COMDIV_NUMBER_OF_COMMON_DIVISORS_H
