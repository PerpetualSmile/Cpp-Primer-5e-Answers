#include <iostream>
using namespace std;
int main() {
    int ia[3][4] = {{1, 2},{3, 4}, {5, 6}};
    for(auto &p: ia) 
        for(auto num: p)
            cout << num << " ";
    cout << endl;
    for(auto i = 0; i < 3; i++)
        for(auto j = 0; j < 4; j++)
            cout << ia[i][j] << " ";
    cout << endl;

    for(auto *p = ia; p != end(ia); p++)
        for(auto *q = *p; q != end(*p); q++)
            cout << *q << " ";
    cout << endl;
    return 0;
}