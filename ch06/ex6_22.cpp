#include <iostream>
using namespace std;
void swap(const int *&a, const int *&b) {
    auto tmp = a;
    a = b;
    b = tmp;
}
int main() {
    const int i = 1, j = 2;
    auto a = &i, b = &j;
    swap(a, b);
    cout << *a << endl
         << *b << endl;
    return 0;
}