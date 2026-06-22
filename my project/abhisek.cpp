#include <iostream>
#include <windows.h>
using namespace std;

string A[5] = {
    "  *  ",
    " * * ",
    "*****",
    "*   *",
    "*   *"
};

string B[5] = {
    "**** ",
    "*   *",
    "**** ",
    "*   *",
    "**** "
};

string H[5] = {
    "*   *",
    "*   *",
    "*****",
    "*   *",
    "*   *"
};

string I[5] = {
    "*****",
    "  *  ",
    "  *  ",
    "  *  ",
    "*****"
};

string S[5] = {
    "*****",
    "*    ",
    "*****",
    "    *",
    "*****"
};

string E[5] = {
    "*****",
    "*    ",
    "*****",
    "*    ",
    "*****"
};

string K[5] = {
    "*   *",
    "*  * ",
    "***  ",
    "*  * ",
    "*   *"
};

void printWord(int letters)
{
    for (int row = 0; row < 5; row++)
    {
        if (letters >= 1) cout << A[row] << "  ";
        if (letters >= 2) cout << B[row] << "  ";
        if (letters >= 3) cout << H[row] << "  ";
        if (letters >= 4) cout << I[row] << "  ";
        if (letters >= 5) cout << S[row] << "  ";
        if (letters >= 6) cout << E[row] << "  ";
        if (letters >= 7) cout << K[row] << "  ";

        cout << endl;
    }
}

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        system("cls");   // clear screen
        printWord(i);
        Sleep(1000);     // 1 second delay
    }

    return 0;
}