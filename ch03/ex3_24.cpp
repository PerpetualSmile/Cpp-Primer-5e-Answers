#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto it = nums.cbegin(); it != nums.cend() - 1;) {
        cout << *it + *(++it) << endl;
    }
    cout << endl;
    for(auto it1 = nums.cbegin(), it2 = nums.cend()-1; it1 <= it2; it1++, it2--) {
        cout << *it1 + *it2 << endl;
    }
    return 0;
}