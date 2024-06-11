#include <bits/stdc++.h>


int main(){

    int lin, col;
    bool ehIdent = true;

    std::cin >> lin >> col;
    if(lin !=col){
        ehIdent = false;
    }
   else{
     int a[lin][col];
    for(int i =0; i < lin; i++){
        for(int j = 0; j < col; j++){
            std::cin >> a[i][j];
        }
    }

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            if(i==j && a[i][j] !=1 || (i!=j && a[i][j] ==1)){
                ehIdent = false;
            }
        }
    }
   }
    if (ehIdent){
        std::cout << "SIM" << std::endl;
    }
    else{
        std::cout << "NÃO" << std::endl;
    }
}   