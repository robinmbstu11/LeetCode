//
// Created by FNU Shariful on 7/7/22.
//
// https://leetcode.com/problems/maximum-subarray/
#ifndef LEETCODE_LEETCODE_53_MAXIMUM_SUBARRAY_H
#define LEETCODE_LEETCODE_53_MAXIMUM_SUBARRAY_H
#include "vector"
using namespace std;

int maxSubArray(vector<int>& nums) {
    int mx = INT_MIN,sum = 0, ok = false;
    for( int i=0; i<nums.size(); i++ ) if( nums.at(i) > -1 ) {
        ok = true;
    }else mx = max(mx,nums.at(i));
    if( ok ) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) + sum < 0) sum = 0;
            else sum += nums.at(i);
            if (sum > mx) mx = sum;
        }
    }
    return mx;
}
#endif //LEETCODE_LEETCODE_53_MAXIMUM_SUBARRAY_H
