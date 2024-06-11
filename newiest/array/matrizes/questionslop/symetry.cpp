#include <iostream>

int main() {
    int lin, col;
    std::cin >> lin >> col;

    int matrix[lin][col];
    for (int i = 0; i < lin; ++i) {
        for (int j = 0; j < col; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    bool Simet = true;

    // Checa se a matriz é simetrica
    for (int i = 0; i < lin; ++i) {
        for (int j = 0; j < col; ++j) {
            if (matrix[i][j] != matrix[j][i]) {
                Simet = false;
                break;
            }
        }
        if (!Simet) {
            break;
        }
    }

    if (Simet) {
        std::cout << "Matriz Simétrica" << std::endl;
    } else {
        std::cout << "Matriz não Simétrica" << std::endl;
    }

    return 0;
}