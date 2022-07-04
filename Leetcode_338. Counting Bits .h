//
// Created by FNU Shariful on 7/2/22.
//

#ifndef LEETCODE_LEETCODE_338_COUNTING_BITS_H
#define LEETCODE_LEETCODE_338_COUNTING_BITS_H

#include "iostream"
#include "vector"
#include "cstring"

using namespace std;

vector<int> countBits(int n) {
    int output[n + 9];
    vector<int> finalOutput;
    memset(output, 0, sizeof output);
    output[0] = 0;
    output[1] = 1;
    output[2] = 1;
    int modVal = 2;
    for (int i = 3; i <= n; i++) {
        if (i % modVal == 0) {
            modVal *= 2;
            output[modVal] = 1;
        } else {
            output[i] = output[modVal] + output[i % modVal];
        }
    }
//    for (int i = 0; i <= n; i++)
//        finalOutput.emplace_back(output[i]);
    return finalOutput;
}

#endif //LEETCODE_LEETCODE_338_COUNTING_BITS_H
