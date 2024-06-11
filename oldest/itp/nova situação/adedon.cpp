#include <bits/stdc++.h>

using namespace std;

int main(){ 

int d1, d2 ,d3 , d4;
cin >> d1 >> d2  >> d3 >> d4;

int max = d1+d2+d3+d4;


if(max <=0){
    cout <<"Ei! Ninguém colocou nada!\n";
} 
else {
    char L = 'A'+(max-1)%26;

    cout <<"Letra: " << L << endl;
}

}
