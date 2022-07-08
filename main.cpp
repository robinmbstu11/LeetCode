#include "iostream"
#include "vector"
#include "string"
#include "sstream"
#include "unordered_map"
#include "LeetCode_238. Product of Array Except Self.h"

using namespace std;

int main() {
    int n,val;
    vector<int> input;
    cin>>n;
    for( int i=0; i<n; i++ ) {
        cin>>val;
        input.emplace_back(val);
    }
    productExceptSelf(input);
}
