#include <iostream>
#include <string>
using namespace std;
int main() {
    string cur, pre;
    while(cin >> cur) {
        if(cur == pre) {
            cout << cur;
            break;
        }
        pre = cur;
    }
    if(cin.eof()) cout << "No word was repeated." << endl;
    else cout << " repeats." << endl;
    return 0;
}