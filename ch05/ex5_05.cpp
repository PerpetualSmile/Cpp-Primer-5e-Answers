#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    int grade;
    while(cin >> grade) {
        string res;
        if(grade < 60) res = scores[0];
        else {
            res = scores[(grade - 50) / 10];
            if(grade != 100) {
                if(grade % 10 > 7) res += "+";
                else if(grade %10 < 3) res += "-";
            }
        }
        cout << res << endl;
    }
    return 0;
}
