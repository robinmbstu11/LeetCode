//
// Created by FNU Shariful on 7/1/22.
//

//https://leetcode.com/problems/3sum/
//Explanation: https://www.youtube.com/watch?v=8jfZVhTa25U&t=1324s

#ifndef LEETCODE_3SUM_H
#define LEETCODE_3SUM_H
#include "iostream"
#include "vector"
#include "set"

using namespace std;
vector<vector<int>> twoSum(vector<int> input,int pos,int target)
{
    int low = pos, hi = input.size()-1,end = input.size()-1;
    vector<vector<int>> rst;
    while( low < hi )
    {
        if( low-1 >= pos && input[low-1] == input[low] ) {
            low++;
            continue;
        }
        if( hi+1 <= end && input[hi] == input[hi+1] ) {
            hi--;
            continue;
        }
        else if( input[low] + input[hi] > target ) hi--;
        else if( input[low] + input[hi] < target ) low++;
        else
        {
            rst.push_back({input[pos-1],input[low], input[hi]});
            low++;
            continue;
        }
    }
    return rst;
}

int _3Sum()
{
    int n,val;
    vector<int> input;
    cin>>n;
    for( int i=0; i<n; i++ )
    {
        cin>>val;
        input.push_back(val);
    }
    sort(input.begin(),input.end());
    vector<vector<int>> output;
    vector<vector<int>> rst;
    for( int i=0; i<input.size(); i++ ) {
        if( i == 0 || (i-1>= 0 && input[i] != input[i-1]) ) {
            rst = twoSum(input, i + 1, 0 - input[i]);
            for (auto x: rst) {
                output.push_back(x);
            }
        }
    }
//    for( auto out : output )
//    {
//        for( auto x: out )
//        {
//            cout<<x<<" ";
//        }
//        cout<<endl;
//    }
}

#endif //LEETCODE_3SUM_H
