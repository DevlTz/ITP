#include <iostream>
using namespace std;

int main() {

 int V, divV, divV2;

        
    divV = V % 10;
    divV2 = V/10;


    cout << "Coloque o primeiro número com três digitos:";
    cin >> V;
    cout << V;

    cout << "Esse é a primeira parte da sua divisão: ";
    cout << divV;

    cout << "Esse é a segunda parte da sua divisão: ";
    cout << divV;

    cout << divV;
    V = V/10;

    cout << V % 10;
    V = V/10;
    cout << V;

        cout << "Esse é o resultado espelhado: ";
        cout << V;
}

