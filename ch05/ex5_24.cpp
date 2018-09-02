#include <iostream>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    if (n == 0) throw std::runtime_error("divisor is 0");
    cout << static_cast<double>(m) / n << endl;
    return 0;
}