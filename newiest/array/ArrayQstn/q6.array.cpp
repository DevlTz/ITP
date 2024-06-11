#include <bits/stdc++.h>

int main(){

    int n, min;
    
    std::cin >> n;

    int v[n+1];
    for(int i=0; i< n; i++){
        std::cin >> v[i];
        }
    min = std::abs(v[1] - v[0]);
    
    for(int i= 1; i <n; i++){
        for(int j = i+1; j < n; j++){
            int a = std::abs(v[i] - v[j]);
            if(a<min){
                min = a;
            }

        }
    }
    std::cout << min << std::endl;
}