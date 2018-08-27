#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    if(a.size() > b.size()) cout << a << endl;
    else if(a.size() < b.size()) cout << b << endl;
    return 0;
}