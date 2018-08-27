#include <iostream>
#include <string>
using namespace std;
int main() {
    string res;
    string word;
    while(cin >> word) {
        res += word + " ";
    }
    cout << res << endl;
    return 0;
}