#include <iostream>
#include <string>

int main() {
    std::string A, B;
    int count = 0;

    // Recebendo as duas strings
    getline(std::cin, A); // Pega a primeira string
    getline(std::cin, B); // Pega a segunda String

    // Convertendo ambas as strings para minúsculas
    for (int i = 0; i < A.length(); i++)
        A[i] = tolower(A[i]); // Passa a primeira string para minúsculas
    for (int i = 0; i < B.length(); i++)
        B[i] = tolower(B[i]); // Passa a segunda string para minúsculas

    // Verificando ocorrências de A em B
    size_t pos = B.find(A);
    while (pos != std::string::npos) {
        count++;
        pos = B.find(A, pos + 1);
    }

    // Exibindo o resultado
    std::cout << count;

    return 0;
}
