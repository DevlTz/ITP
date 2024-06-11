#include <bits/stdc++.h>

using namespace std;

int main(){ 


int n, fat = 1;

    cin >> n;
    while (n>0) {
        fat = fat *n;
        n--;
    }

    // fat faz ser fatorial, logo... -> Enquanto o número inserido for maior que 0, o número inserido vai ser multiplicado por fat, que é 1. Continuamente sendo diminuido até chegar a um valor menor que 0.

    cout << fat << endl;
}
//
