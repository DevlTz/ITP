#include <bits/stdc++.h>

using namespace std;

int main(){ 

int a, b;


cin >> a >> b;

if(a%2!=2){
    cout <<"Não posso somar, pois " << a << " não é par" << endl;

}
if (b%2!=2){
    cout << "Não posso somar, pois " << b << " não é par" << endl;
}
    
else{
    cout << a + b << endl;
}

}