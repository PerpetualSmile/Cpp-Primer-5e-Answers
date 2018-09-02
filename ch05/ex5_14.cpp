#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string s;
    int count = 1;
    int maxCount = 0;
    string res;
    string pre;
    while(cin >> s) {
        if(pre == s) ++count;
        else count = 1;
        if(count > maxCount) {
            maxCount = count;
            res = s;
        }
        pre = s;
    }
    cout << res << ": " << maxCount << endl;
    return 0;
}