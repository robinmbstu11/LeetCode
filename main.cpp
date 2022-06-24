#include "iostream"
#include "vector"
#include "Two_Sum.h"
#include "Monk and Rotation.h"

using namespace std;
unsigned binarySearch(vector<int> & nums, int key)
{
    unsigned lw = 0, hi = nums.size()-1, mid;


    while( lw < hi )
    {
        mid = (hi + lw )/2;
//        cout<<mid<<" "<<key<<endl;
        if( nums[mid] == key ) return mid;
        else if( nums[mid] < key ) hi = mid-1;
        else lw = mid + 1;
    }
    return -1;
}

vector<int> twoSum(vector<int>& nums, int target) {

    for( unsigned i = 0; i< nums.size(); i++ )
    {
        unsigned key = target - nums[i];
//        cout<<key<<endl;
        unsigned keyPosition = binarySearch(nums,key);
//        cout<<keyPosition<<endl;
        if( keyPosition != -1 )
//            cout<<"keyPosition "<<keyPosition<<endl;
            break;
        cout<<key<<endl;
    }

}

int main()
{
//    vector<int> nums;
//    int value;
//    for( int i = 0; i<4; i++ )
//    {
//        cin>>value;
//        nums.emplace_back(value);
//    }
//    unsigned target;
//    cin>>target;
//    twoSum(nums,target);
    MonkandRotation();
    return 0;
}