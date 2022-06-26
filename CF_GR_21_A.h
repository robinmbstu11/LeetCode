//
// Created by FNU Shariful on 26/06/22.
//

#include "iostream"

#ifndef LEETCODE_CF_GR_21_A_H
#define LEETCODE_CF_GR_21_A_H

using namespace std;
void function1()
{
    int T;
    cin>>T;
    for( int t=1; t<=T; t++ )
    {
        long long n,z,arr[2002];
        cin>>n>>z;
        long long mx = -1,a;
        for( int i=0; i<n; i++ )
        {
            cin>>arr[i];
            a = arr[i];
            a = a | z;
            mx = max(mx,a);
            z = z & arr[i];
            cout<<a<<" "<<z<<" "<<mx<<endl;
        }
        cout<<mx<<endl;
    }
}
#endif //LEETCODE_CF_GR_21_A_H
