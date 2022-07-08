//
// Created by FNU Shariful on 7/7/22.
//
// https://leetcode.com/problems/maximum-product-subarray/
#ifndef LEETCODE_LEETCODE_152_MAXIMUM_PRODUCT_SUBARRAY_H
#define LEETCODE_LEETCODE_152_MAXIMUM_PRODUCT_SUBARRAY_H
#include "vector"

using namespace std;

int maxProduct(vector<int> &nums)
{
   if( nums.size() == 1 ) return nums[0];

   int rightMax = 0, curProduct = 1,leftMax = 0;
   for( int i=0; i<nums.size(); i++ )
   {
       if( nums[i] != 0 )
       {
           curProduct = curProduct * nums[i];
           rightMax = max(curProduct,rightMax);
       }
       else curProduct = 1;
   }

   curProduct = 1;
   for( int i=nums.size()-1; i>=0; i-- )
   {
       if( nums[i] != 0 )
       {
           curProduct = curProduct * nums[i];
           leftMax = max(curProduct,leftMax);
       }
       else curProduct = 1;
   }
   return max(rightMax,leftMax);
}
#endif //LEETCODE_LEETCODE_152_MAXIMUM_PRODUCT_SUBARRAY_H
