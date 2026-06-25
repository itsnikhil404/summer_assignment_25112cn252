#include <iostream>
#include <string>
using namespace std;

int main() {
    string words[] = {"apple", "cat", "elephant", "dog"};
    int n = 4;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (words[j].length() > words[j + 1].length()) {
                swap(words[j], words[j + 1]);
            }
        }
    }

    cout << "Words Sorted by Length:\n";
    for (int i = 0; i < n; i++) {
        cout << words[i] << " ";
    }

    return 0;
}