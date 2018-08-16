#include<iostream>
#include<Sales_item.h>
using namespace std;

int main() {
    freopen("data/book_sales", "r", stdin);
    Sales_item sum;
    if (cin >> sum) {
        Sales_item cur;
        while (cin >> cur) {
            if (cur.isbn() == sum.isbn()) {
                sum += cur;
            }
            else {
                cout << sum << endl;
                sum = cur;
            }
        }
        cout << sum << endl;
    }
    return 0;
}