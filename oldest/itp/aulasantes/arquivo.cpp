#include <iostream>
using namespace std;

int main (){
    float a, b, c;

    cin >> a >> b >>c;
    
    cout << "Essa é a soma de todos os valores:" << a + b + c << "\n";
    cout << "Esse é o valor da multiplicação do priemiro valor com o segundo" << a * b * c << "\n";
    cout << "Essa a subtração do primeiro valor com o segundo:" << a - b << "\n";
    cout << "Essa é a divisão de do primeiro valor e do terceiro:" << a / c << "\n";
    
    double delta = b *b - 4 * a * c;
    cout << "Esse é o valor do seu delta:" << delta <<"\n";

    return 0;
}