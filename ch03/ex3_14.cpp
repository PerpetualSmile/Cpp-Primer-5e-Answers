#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int num;
    vector<int> nums;
    while(cin >> num) nums.push_back(num);
    for(auto num: nums) cout << num << endl;
    return 0;
}