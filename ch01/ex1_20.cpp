#include <iostream>
#include <Sales_item.h>
using namespace std;
int main() 
{
    freopen("data/book_sales", "r", stdin);
    Sales_item item;
    while (cin >> item) {
        cout << item << endl;
    }
    return 0;
}