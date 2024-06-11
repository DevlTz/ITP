#include <iostream>

int main() {
    int l, c;
    std::cin >> l >> c;

    // Define matriz A e B
    int a[l][c];
    int b[l][c];
    int result[l][c];

    // Input para Matriz A
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            std::cin >> a[i][j];
        }
    }

    // Input para matriz b
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            std::cin >> b[i][j];
        }
    }

    // SOMA
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    // SAIDA
        for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            std::cout << result[i][j];
            if(j != c-1) {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}