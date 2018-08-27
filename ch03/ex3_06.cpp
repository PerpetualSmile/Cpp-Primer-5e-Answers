#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "hello world";
    cout << s << endl;
    for(auto &ch: s) {
        ch = 'X';
    }
    cout << s << endl;
    return 0;
}