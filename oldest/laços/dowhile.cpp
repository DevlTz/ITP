#include <bits/stdc++.h>

using namespace std;

int main(){ 

int n;
int sum =0;
cin >> n;

    do{
        sum +=n; // 0+6 // 6+5 // 11 + 4 // 15 + 3// 18 + 2 // 20 + 1 // 21 + 0// caso seja 6 o valor. 
        n--;
    // quando ele termina de fazer, ele atribui o valor na variavel.
    } while (n !=0);

        cout << sum << endl;

}