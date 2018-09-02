#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    int score;
    while(cin >> score) {
        string res;
        res = score < 60? scores[0]: scores[(score - 50) / 10];
        res += (score == 100 | score < 60)? "": score % 10 > 7? "+": score % 10 < 3?"-":"";
        cout << res << endl;
    }
    return 0;
}