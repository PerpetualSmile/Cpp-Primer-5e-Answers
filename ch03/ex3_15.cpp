#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string tmp;
    vector<string> s;
    while(cin >> tmp) s.push_back(tmp);
    for(auto tmp: s) cout << tmp << endl;
    return 0;
}