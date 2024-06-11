#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, copy = "";
    cin >> str;

    int strtam = str.length();

    for (int i = 0; i < strtam; i++)
    {
        copy += str[(strtam - 1) - i];
    }

    cout << str << "|" << copy << "\n";

    return 0;
}