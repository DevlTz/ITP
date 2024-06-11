#include <iostream>
#include <string>

int main() {
    std::string A, B;
    std::string C;
    std::getline(std::cin, A);
    std::getline(std::cin, B);

    int maxLength = std::max(A.length(), B.length());

    for (int i = 0; i < maxLength; i++) {
        if (i < A.length()) {
            C += A[i];
        }
        if (i < B.length()) {
            C += B[i];
        }
    }

    std::cout << "Saida : " << C << std::endl;

    return 0;
}