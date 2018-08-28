#include <iostream>
using namespace std;
int main() {
    int ia[3][4] = {{1, 2},{3, 4}, {5, 6}};
    using int_array = int[4];
    for(int_array &p: ia) 
        for(int num: p)
            cout << num << " ";
    cout << endl;
    for(size_t i = 0; i < 3; i++)
        for(size_t j = 0; j < 4; j++)
            cout << ia[i][j] << " ";
    cout << endl;

    for(int_array *p = ia; p != end(ia); p++)
        for(int *q = *p; q != end(*p); q++)
            cout << *q << " ";
    cout << endl;
    return 0;
    return 0;
}