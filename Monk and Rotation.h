//
// Created by FNU Shariful on 24/06/22.
//
// https://www.hackerearth.com/practice/codemonk/
#include "iostream"

#ifndef LEETCODE_MONK_AND_ROTATION_H
#define LEETCODE_MONK_AND_ROTATION_H

using namespace std;

void MonkandRotation()
{
   unsigned T,N,K;
   cin>>T;
   for(unsigned t = 1; t<=T; t++)
   {
      cin>>N>>K;
       unsigned input[N+2], output[N+2];
      for( int i=1; i<=N; i++ ) cin>>input[i];
      K = K%N;
      for( int i = 1; i<=N; i++ )
      {
          int rst = (i+K)%N;
          if( rst == 0 ) rst = N;
         output[rst] = input[i];
      }
      for( int i=1; i<=N; i++ )
      {
          cout<<output[i]<<" ";
      }
      cout<<endl;
   }
}
#endif //LEETCODE_MONK_AND_ROTATION_H

