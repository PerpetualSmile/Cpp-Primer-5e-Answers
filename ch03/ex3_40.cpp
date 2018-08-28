#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s1[] = "hello";
    char s2[] = "world";
    auto len = strlen(s1) + strlen(s2) + 2;
    char* s3 = new char[len];
    strcpy(s3, s1);
    strcat(s3, " ");
    strcat(s3, s2);
    cout << s3 << endl;
    return 0;
}