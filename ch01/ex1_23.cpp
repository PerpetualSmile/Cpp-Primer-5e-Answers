#include<iostream>
#include<Sales_item.h>
using namespace std;
int main() {
    freopen("data/book_sales", "r", stdin);
    Sales_item cur;
    if(cin >> cur) {
        Sales_item tmp;
        int count = 1;
        while(cin >> tmp) {
            if(tmp.isbn() == cur.isbn()) {
                count++;
            }
            else {
                cout << cur.isbn() << ": "
                     << count << endl;
                count = 1;
                cur = tmp;
            }
        }
        cout << cur.isbn() << ": "
             << count << endl;
    }
    return 0;
}