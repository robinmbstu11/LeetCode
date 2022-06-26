//
// Created by FNU Shariful on 25/06/22.
//

#ifndef LEETCODE_JAMESANDTHEMENUS_H
#define LEETCODE_JAMESANDTHEMENUS_H

#include "iostream"
#include "algorithm"

using namespace std;

void JamesandtheMenus(){
    int n,m;
    cin>>n>>m;
    int input[1001][1001],sum[1000],mx[1001];
    memset(input,0,sizeof input);
    memset(sum,0,sizeof sum);
    memset(mx,0,sizeof mx);
    for( unsigned i = 0; i<n; i++ )
    {
        for( unsigned j = 0; j<m; j++ )
        {
            cin>>input[i][j];
            sum[i]+=input[i][j];
            mx[j]= max(mx[j],input[i][j]);
        }
    }

    int cnt[1001],ans=0;
    for( unsigned i = 0; i<n; i++ )
    {
        for( unsigned j =0; j<m; j++)
        {
           cnt[i] += input[i][j] == mx[j];
           ans= max(ans,cnt[i]);
        }
    }

    int pos = -1;
    int finalRst = 0;
    for(unsigned i = 0; i<n; i++ )
    {
       if( ans == cnt[i])
       {
           if( sum[i] > finalRst )
           {
               finalRst = sum[i];
               pos = i;
           }
       }
    }
    cout<<pos+1<<endl;
}

#endif //LEETCODE_JAMESANDTHEMENUS_H
