#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string line;
    while(getline(cin, line)) {
        for(auto ch: line) {
            if(!ispunct(ch)) cout << ch;
        }
        cout << endl;
    }
    return 0;
}