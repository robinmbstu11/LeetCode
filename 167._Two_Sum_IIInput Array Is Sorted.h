//
// Created by FNU Shariful on 6/29/22.
//

//// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/


#ifndef LEETCODE_167__TWO_SUM_IIINPUT_ARRAY_IS_SORTED_H
#define LEETCODE_167__TWO_SUM_IIINPUT_ARRAY_IS_SORTED_H
#include "vector"
#include "iostream"

using namespace std;
int binarySearch(vector<int> &numbers, int target)
{
  int hi, low, mid;
  hi = numbers.size()-1;
  low = 0;
  while( hi - low > 1 )
  {
      mid = (hi+low)/2;
      if( numbers[mid] == target )
      {
          return mid;
      }
      if ( numbers[mid] < target ) low = mid+1;
      else hi = mid;
  }
    if ( numbers[low] ==  target ) return low;
    else if( numbers[hi] == target) return hi;
    return INT_MIN;
}

vector<int> twoSum(vector<int>& numbers, int target) {
    int val;
    vector<int> ret;
    for(int i =0; i<numbers.size(); i++)
    {
        val = binarySearch(numbers,target-numbers[i]);
        if(val != INT_MIN )
        {
            if ( i == val ) val+=1;
            ret.emplace_back(min(i,val)+1);
            ret.emplace_back(max(i,val)+1);
            cout<<i+1<<" "<<val+1<<endl;
            break;
        }
    }
    return ret;
}
#endif //LEETCODE_167__TWO_SUM_IIINPUT_ARRAY_IS_SORTED_H
