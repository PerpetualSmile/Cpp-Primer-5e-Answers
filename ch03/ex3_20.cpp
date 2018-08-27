#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    vector<int> nums;
    while (cin >> num)
        nums.push_back(num);
    for (auto i = 0; i < nums.size() - 1; i++) {
        cout << nums[i] + nums[i + 1] << endl;
    }
    cout << endl;
    decltype(nums.size()) len;
    if (nums.size() % 2 == 0)
        len = nums.size() / 2;
    else
        len = nums.size() / 2 + 1;
    for (auto i = 0; i < len; i++) {
        cout << nums[i] + nums[nums.size()-i-1] << endl;
    }
    return 0;
}