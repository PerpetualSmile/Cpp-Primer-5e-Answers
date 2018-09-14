#include <iostream>
using namespace std;
void change(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 1, b = 2;
    change(a, b);
    cout << a << endl
         << b << endl;
    return 0;
}