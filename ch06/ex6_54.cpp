#include <iostream>
#include <vector>
using namespace std;

int func(int, int);
typedef decltype(func) function;

int Add(int a, int b) {
    return a + b;
}

int Sub(int a, int b) {
    return a - b;
}

int Mul(int a, int b) {
    return a * b;
}

int Div(int a, int b) {
    return a / b;
}
vector< function*> funcs1 = {Add, Sub, Mul, Div};
vector< int (*) (int, int)> funcs2 = {Add, Sub, Mul, Div};

int main() {
    int a = 7, b = 4;
    for(auto f: funcs1) {
        cout << f(a, b) << " ";
    }
    cout << endl;
    for(auto f: funcs2) {
        cout << f(a, b) << " ";
    }
    cout << endl;
    return 0;
}