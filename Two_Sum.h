//
// Created by FNU Shariful on 5/21/22.
//

#ifndef LEETCODE_TWO_SUM_H
#define LEETCODE_TWO_SUM_H
#include "algorithm"
#include "vector"
#include "iostream"

using namespace std;

class Two_Sum {
public:

    unsigned binarySearch(vector<int> & nums, int key)
    {
        unsigned lw = 0, hi = nums.size(), mid;
        mid = (hi + lw )/2;

        while( lw < hi )
        {
            if( nums[mid] == key ) return mid;
            else if( nums[mid] < key ) hi = mid-1;
            else lw = mid;
        }
        return -1;
    }

    vector<int> twoSum(vector<int>& nums, int target) {

        for( unsigned i = 0; i< nums.size(); i++ )
        {
            unsigned key = target - nums[i];
            unsigned keyPosition = binarySearch(nums,key);
            if( keyPosition != -1 )
            {
               cout<<i<<" "<<keyPosition<<endl;
                break;
            }
        }

    }
};


#endif //LEETCODE_TWO_SUM_H
