#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v1 = {0, 1, 2, 2};
    vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};
    auto len = v1.size() > v2.size()? v2.size(): v1.size();
    for(auto i = 0; i < len; ++i) {
        if(v1[i] != v2[i]) {
            cout << "false" << endl;
            return 0;
        }
    }
    cout << "true" << endl;
    return 0;
}