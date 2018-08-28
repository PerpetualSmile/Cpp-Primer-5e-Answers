#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a[10];
    for(auto i = 0; i < 10; i++) a[i] = i;
    int a2[10];
    for(auto i = 0; i < 10; i++) a2[i] = a[i]; 

    vector<int> nums;
    for(auto i = 0; i < 10; i++) nums.push_back(i);
    vector<int> nums2;
    for(auto num: nums) nums2.push_back(num);
    for(auto num: nums2) cout << num << endl;
    return 0;
}