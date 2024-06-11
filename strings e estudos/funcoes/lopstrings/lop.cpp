#include <iostream>
#include <string>

int main(){ 
    std::string str, aux;    
    getline(std::cin, str);

    int strtam = str.length();

    for(int i = 0; i < str.length(); i++){ 
        aux += str[strtam - 1 - i]; 
    }
    str.append("|");
    str.append(aux);


    std::cout << str << std::endl; 

    return 0;
}
            