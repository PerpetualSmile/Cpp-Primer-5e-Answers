#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[10];
    for(auto it = b; it != end(b); it++) *it = a[it - b];
    for(auto num: b) cout << num << endl;
    return 0;
}