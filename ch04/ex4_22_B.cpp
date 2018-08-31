#include <iostream>
using namespace std;
int main()
{
    int grade;
    while(cin >> grade) {
        cout << (grade >= 90? "high pass": grade >= 75? "pass": grade < 60? "fail": "low pass") << endl;
    }
    return 0;
}