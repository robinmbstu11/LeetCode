#include "iostream"
#include "vector"
#include "string"
#include "sstream"
#include "167._Two_Sum_IIInput Array Is Sorted.h"


using namespace std;

int main()
{
    vector<int> ar;
    int val,n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>val;
        ar.emplace_back(val);
    }
    cin>>n;
    twoSum(ar,n);
}