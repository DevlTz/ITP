#include <iostream>
using namespace std;

int main() {
    int largura, comprimento;
    int t1, t2;
    
    cout << "Hello World!\n";
    cin >> largura;
    cin >> comprimento;

    t1 =    largura * comprimento + ((largura - 1 ) * (comprimento));
    t2 = 2 * ((largura - 1) + (comprimento - 1));
    
    cout << t1 << endl;
    cout << t2 << endl;

    return 0;
}