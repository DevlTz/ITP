#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        std::cin >> a[i];

    }

    int count = 0;
    bool igual = false;
    for(int j = 0; j < n; j++){
        if(a[j] == a[n-1-j] ){
            count++;
        }
    }
    if (count == n){
        std::cout << "SIM";
    }
    else{
        std::cout << "NÃO";
    }
}


