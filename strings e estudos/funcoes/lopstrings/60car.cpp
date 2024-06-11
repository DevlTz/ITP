#include <iostream>
#include <string>

int main(){
// Todo numero na tabela Ascii somado + 32, é a sua letra Minusc.
// Se a nossa divisao for por 32 e der = 2 Maisc contrario = 3 Minusc   

    std::string str;

   getline(std::cin, str);
    
    for(int i = 0; i < str.length(); i++){
        if( i == 0 | str[i - 1] == ' '){
            if (str[i] / 32 == 3){
                str[i] = str[i] - 32;
            }
    }
        else{
            if(str[i] /32 ==2){
                str[i] = str[i] + 32;

            }
        }
               
        }
            std::cout << str << std::endl;
        
    return 0;

}