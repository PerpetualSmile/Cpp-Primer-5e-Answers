#include <iostream>
#include <string>
using namespace std;
int main() {
    int m, n;
    while(cin >> m >> n) {
        try {
            if(n == 0) throw runtime_error("divisor is 0.");
            cout << static_cast<double>(m) / n << endl;
        }
        catch (runtime_error err) {
            cout << err.what() << endl;
            cout << "Try again?yes or no:" << endl;
            string response;
            cin >> response;
            if(response == "no") break;
        }
    }
    return 0;
}