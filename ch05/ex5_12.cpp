#include <iostream>
using namespace std;
int main() {
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, tabCnt = 0, spaceCnt = 0, newLineCnt = 0, ff = 0, fi = 0, fl = 0;
    char ch;
    char pre = '\0';
    while(cin >> noskipws >> ch) {
        switch (ch) {
            case 'a': case 'A':
                ++aCnt;
                break;
            case 'e': case 'E':
                ++eCnt;
                break;
            case 'i': 
                if(pre == 'f') ++fi;
            case 'I':
                ++iCnt;
                break;
            case 'o': case 'O':
                ++oCnt;
                break;
            case 'u': case 'U':
                ++uCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++newLineCnt;
                break;
            case ' ':
                ++spaceCnt;
                break;
            case 'f':
                if(pre == 'f') ++ff;
                break;
            case 'l':
                if(pre == 'f') ++fl;
                break;
        }
        pre = ch;
    }
    cout << "a(A): \t" << aCnt << endl
         << "e(E): \t" << eCnt << endl
         << "i(I): \t" << iCnt << endl
         << "o(O): \t" << oCnt << endl
         << "u(U): \t" << uCnt << endl
         << "\\t: \t" << tabCnt << endl
         << "\\n: \t" << newLineCnt << endl
         << "space \t" << spaceCnt << endl
         << "fi: \t" << fi << endl
         << "ff: \t" << ff << endl
         << "fl: \t" << fl << endl;
    return 0;
}