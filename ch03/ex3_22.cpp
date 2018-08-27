#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string line;
    vector<string> lines;
    while(getline(cin, line)) {
        lines.push_back(line);
    }
    for(auto it = lines.begin(); it != lines.end() && !it->empty(); it++) {
        for(auto &ch: *it) ch = toupper(ch);      
        cout << *it << endl;
    }
    return 0;
}