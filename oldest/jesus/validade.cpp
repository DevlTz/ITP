#include <iostream>
using namespace std;
int main (){
    int a;
    cin >> a;
    cout << a/365 << " ano(s)\n";
    a=a%365;
    cout << a/30 << " mes(es)\n"; 
    a=a%30;
    cout << a/1 << " dia(s)\n";
    a=a%1;

    
    }