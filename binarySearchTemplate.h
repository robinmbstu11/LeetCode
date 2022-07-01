//
// Created by FNU Shariful on 6/30/22.
//

#ifndef LEETCODE_BINARYSEARCHTEMPLATE_H
#define LEETCODE_BINARYSEARCHTEMPLATE_H
#include "vector"

using namespace std;

//// -1 means key is not found in the vector

int binarySearch(vector<int> ar,int key)
{
    int hi, lw,mid;
    hi = ar.size()-1;
    lw = 0;
    while(lw <= hi)
    {
        mid = lw + (hi-lw)/2;
        if( ar.at(mid) == key ) return mid;
        else if ( key > ar.at(mid) ) lw = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

#endif //LEETCODE_BINARYSEARCHTEMPLATE_H
