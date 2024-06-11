#include <bits/stdc++.h>


int main(){

    int lin, col;
    
    std::cin >> lin >> col;

    int a[lin][col];
    int b[col][lin];

    for(int i = 0; i < lin; i++){
        for(int j=0; j < col; j++){
            std::cin >> a[i][j];
        }
    }

    for(int i =0; i < lin; i++){
        for( int j = 0; j < col; j++){
            b[j][i] = a [i][j];
        }
    }

    for(int j = 0; j < col; j++){
        for (int i=0; i < lin; i++){
            std::cout << b[j][i] << " ";

        }
        std::cout << std::endl;
    }
    
    return 0;

}
