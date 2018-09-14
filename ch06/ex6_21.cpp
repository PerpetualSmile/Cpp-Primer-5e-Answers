#include <iostream>
using namespace std;
int f(const int a, const int *p) {
    return (a > *p)? a: *p;
}
int main() {
    int a = 3, b = 2, *p = &b;
    cout << f(a, p) << endl;
    return 0;
}