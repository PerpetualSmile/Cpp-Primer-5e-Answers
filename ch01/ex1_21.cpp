#include <iostream>
#include <Sales_item.h>
using namespace std;

int main() {
    freopen("data/add_item", "r", stdin);
    Sales_item a, b;
    cin >> a >> b;
    cout << a << " + "
         << b << " = "
         << a + b << endl;
    return 0;
}
