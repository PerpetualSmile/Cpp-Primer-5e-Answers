#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string word;
    vector<string> words;
    while(cin >> word) words.push_back(word);
    for(auto &word: words) 
        for(auto &ch: word) 
            ch = toupper(ch);
    for(auto word: words) cout << word << endl;
    return 0;
}