//
// Created by FNU Shariful on 7/4/22.
//
#ifndef LEETCODE_LEETCODE_35_SEARCH_INSERT_POSITION_H
#define LEETCODE_LEETCODE_35_SEARCH_INSERT_POSITION_H

// https://leetcode.com/problems/search-insert-position/

#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

int searchInsert(vector<int> &nums, int target) {
    int lo = 0, hi = nums.size()-1, mid;
    bool isFound = false;
    while (lo <= hi) {
        mid = (lo+hi)/2;
        if (nums[mid] == target) {
            isFound = true;
            break;
        }
        else if (target > nums[mid] ) lo = mid + 1;
        else hi = mid - 1;
    }
//    cout<<mid<<endl;
    if(!isFound) {
        if( target > nums[mid] ) return mid+1;
        else if( mid-1 >= 0 && target < nums[mid] && target > nums[mid-1] ) return mid;
        else if( mid-1 < 0 ) return 0;
    }
    return mid;
}

#endif //LEETCODE_LEETCODE_35_SEARCH_INSERT_POSITION_H
