#include <iostream>
#include <vector>
using namespace std;
void out(const vector<int>& v, int index) {
    if(index >= v.size()) return;
    cout << v[index] << endl;
    out(v, index+1);
}
int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    out(a, 0);
    return 0;
}