#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(auto it = nums.begin(); it != nums.end(); it++) *it *= 2;
    for(auto num: nums) cout << num << endl;
    return 0;
}