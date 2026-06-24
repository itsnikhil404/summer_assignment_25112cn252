#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sentence;

    cout << "Enter sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word, longest = "";

    while (ss >> word) {
        if (word.length() > longest.length()) {
            longest = word;
        }
    }

    cout << "Longest Word: " << longest;

    return 0;
}