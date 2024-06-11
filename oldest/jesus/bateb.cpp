#include <iostream>
using namespace std;

int main(){
    int x, y, z;
  // x = todas as linhas - O     avião não pode andar para trás, ele só anda em uma direção. y = a posição do avião. z a posição onde está o disco voador.
    cin >> x >> y >> z;
    cout << "\nAqui é o valor que você vai ter que se deslocar:" << (x - z + y)%x << "\n";
    
}