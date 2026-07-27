#include <iostream>
#include <windows.h>
using namespace std;

string M[5] = {
    "*   *",
    "** **",
    "* * *",
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

string T[5] = {
    "*****",
    "  *  ",
    "  *  ",
    "  *  ",
    "  *  "
};

string U[5] = {
    "*   *",
    "*   *",
    "*   *",
    "*   *",
    "*****"
};

void printWord(int letters)
{
    for (int row = 0; row < 5; row++)
    {
        if (letters >= 1) cout << M[row] << "  ";
        if (letters >= 2) cout << I[row] << "  ";
        if (letters >= 3) cout << S[row] << "  ";
        if (letters >= 4) cout << T[row] << "  ";
        if (letters >= 5) cout << U[row] << "  ";

        cout << endl;
    }
}

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        system("cls");
        printWord(i);
        Sleep(1000);
    }

    return 0;
}