#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto &num: nums) num = num % 2? 2 * num: num;
    for(auto num: nums) cout << num << endl;
    return 0;
}
