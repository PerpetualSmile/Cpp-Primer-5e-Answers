#include <iostream>
#include <initializer_list>
using namespace std;
int cal(initializer_list<int> li) {
    int res = 0;
    for(auto num: li) {
        res += num;
    }
    return res;
}
int main() {
    cout << cal({1, 2, 3, 4, 5}) << endl;
    cout << cal({1, 0}) << endl;
    return 0;
}