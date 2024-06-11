#include <iostream>
#include <string>

using namespace std;

int main()
{
    string placa;
    cin >> placa;

    if (placa.length() != 8)
    {
        cout << "não\n";
    }
    else
    {
        bool hifen = placa.at(3) == '-';

        if (!hifen)
        {
            cout << "não\n";
        }
        else
        {
            for (auto i = placa.begin(); i < placa.begin() + 3; i++)
            {
                int a = *i;
                if (a < 65 || a > 90)
                {
                    cout << "não\n";
                    return 0;
                }
            }
            for (auto j = placa.begin() + 5; j < placa.end(); j++)
            {
                int b = *j;
                if (b < 48 || b > 57)
                {
                    cout << "não\n";
                    return 0;
                }
            }
            cout << "sim\n";
        }
    }

    return 0;
}