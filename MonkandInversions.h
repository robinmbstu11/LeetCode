//
// Created by FNU Shariful on 25/06/22.
//
#include "iostream"

#ifndef LEETCODE_MONKANDINVERSIONS_H
#define LEETCODE_MONKANDINVERSIONS_H

using namespace std;

void MonkandInversions()
{
    unsigned T,N,input[20][20];
    cin>>T;
    for( int t=1; t<=T; t++ )
    {
        cin>>N;
        for( int i=0; i<N; i++ )
        {
            for( int j=0; j<N; j++ )
            {
                cin>>input[i][j];
            }
        }
        unsigned invCnt = 0;
        for( int i=0; i<N; i++ )
        {
            for( int j=0; j<N; j++ )
            {
               for( int k =0; k<N; k++ )
               {
                   for( int l=0; l<N; l++ )
                   {
                       if( i<= k && j<=l ){
                           if( input[i][j] > input[k][l]) invCnt++;
                       }
                   }
               }
            }
        }
        cout<<invCnt<<endl;
    }
}


#endif //LEETCODE_MONKANDINVERSIONS_H
