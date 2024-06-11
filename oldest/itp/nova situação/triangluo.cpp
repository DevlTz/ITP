#include <bits/stdc++.h>

using namespace std;

int main(){ 

int tril;
int saude, saudereg=0, saudeboa=1;


cin >> tril;

/* if( 0<= tril <5 ){
    cout <<"Iniciante" << endl;

}
*/
if (5 <= tril <20){
    cin >> saude;
    if (saude == saudereg){
        cout << "Iniciante";
    }
}
else{
    cout << "Intermediário";
}

if (tril >20){
    cin >> saude;

    if (saude == saudereg){
        cout << "Intermediário";
    }
}
else{
    cout << "Avançado";
}
  
}
