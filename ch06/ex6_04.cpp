#include <iostream>
using namespace std;

int fact(int val) {
    int res = 1;
    while(val > 1) {
        res *= val--;
    }
    return res;
}

void interacts() {
    cout << "Enter a number: " ;
    int val = 0;
    cin >> val;
    cout << fact(val) << endl;
}
int main() {
    interacts();
    return 0;
}