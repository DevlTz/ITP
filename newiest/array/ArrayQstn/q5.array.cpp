#include <bits/stdc++.h>

int main(){
    int cont[9] = {0};
    int n, v;
    int MdIf = 1;
    
    std::cin >> n;w
    for(int i=0; i< n; i++){
        std::cin >> v;
        cont[v]++;
    }
    for(int i= 1; i <= 10; i++){
        std::cout << i << ": " << cont[i] << std::endl;
    }
}