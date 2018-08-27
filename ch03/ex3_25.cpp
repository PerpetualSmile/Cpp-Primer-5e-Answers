#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> scores(11, 0);
    int grade;
    auto it = scores.begin();
    while(cin >> grade) {
        if(grade <= 100) {
            *(it + grade/10) += 1;
        }
    }
    for(auto num: scores) cout << num << endl;
    return 0;
}