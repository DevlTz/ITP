#include <bits/stdc++.h>
using namespace std;
int main(){

    double qtd = 0, vlr = 0, mt = 0;
    int sm=0;
    cout << setprecision(2) << fixed;
    

    while(true){

        cin >> qtd;
        if(qtd <0 ){
                break;
            }  
        cin >> vlr;
        
        sm+=qtd;   
        mt+= qtd * vlr;
        
      
    }   
    
        cout << sm << " " << mt;

    }