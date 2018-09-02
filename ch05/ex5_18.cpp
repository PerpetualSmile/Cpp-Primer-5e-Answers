#include <iostream>
#include <string>
using namespace std;
int main() {
    string response;
    do {
        string s1, s2;
        cout << "Enter two string" << endl;
        cin >> s1 >> s2;
        cout << (s1.size() > s2.size()? s2: s1) << endl;
        cout << "Enter q to quit, others to continue" << endl;
        cin >> response;
    } while(response != "q");
    return 0;
}