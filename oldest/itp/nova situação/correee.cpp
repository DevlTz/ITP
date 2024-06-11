#include <bits/stdc++.h>

using namespace std;

int main(){ 

int tril;
int saude, saudereg=0, saudeboa=1;


cin >> tril;

 if( tril <5 ){
    cout <<"Iniciante" << endl;

}

if (tril <20){
    cin >> saude;
    if (saude == saudereg){
        cout << "Iniciante";
    }

    if (tril <20){
    cin >> saude;
    if (saude == saudeboa){
        cout << "Intermediário";
    }
}

}

if (tril >=20){
    cin >> saude;

    if (saude == saudereg){
        cout << "Intermediário";
    }


    if (saude == saudeboa){
        cout << "Avançado";
    }
}
  
}
