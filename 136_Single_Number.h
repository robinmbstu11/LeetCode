//
// Created by FNU Shariful on 6/29/22.
//

//// https://leetcode.com/problems/single-number/
//// Method: XOR property (a^a = a);
//// solution explanation : https://www.youtube.com/watch?v=3iTc_aw0AaQ

#ifndef LEETCODE_136_SINGLE_NUMBER_H
#define LEETCODE_136_SINGLE_NUMBER_H


#include "vector"
#include "cstring"
#include "iostream"
#include "unordered_map"

using namespace std;

int singleNumber(vector<int> &nums) {
    int val = 0;
    for( auto num : nums )
    {
        val = val ^ num;
    }
    return val;
}
#endif //LEETCODE_136_SINGLE_NUMBER_H
