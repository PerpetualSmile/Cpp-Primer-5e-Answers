#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cin >> start >> end;
    if (start > end)
    {
        int tmp = start;
        start = end;
        end = tmp;
    }

    while (start <= end)
    {
        cout << start << " ";
        start++;
    }
    cout << endl;
    return 0;
}