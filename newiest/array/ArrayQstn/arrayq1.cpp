#include <bits/stdc++.h>


int main(){

    int n;

    std::cin >>n;

    int values[n];

    for(int &v; values){
        std::cin >> values[v];
        
    }
    bool inv=true;
    for(int i=0; i < n; i++){
        if(values[i] != values[n-1-i]){
      inv=false;
        }

    }
    if(inv){
        std::cout << "SIM" << std::endl;

    }

    else(){
        std::cout << "NÃO" <<std:endl;
        
    }

}   