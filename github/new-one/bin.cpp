#include <iostream>

void bin(int n){
    if( n > 0){
        std::cout << n;
        }   
        else{
            bin(n / 2);
            std::cout << n %2;
        }
}

int main(){
    unsigned int val;
    std::cin >> val;
    bin(val);
    std::cout << val << std::endl;
    return 0;   
}