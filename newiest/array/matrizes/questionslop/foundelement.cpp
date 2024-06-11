#include <iostream>

int main() {
    int n, m, x;
    bool enc = false;

    std::cin >> n >> m;

    int a[n][m];

    // Input para Matriz a
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
        }
    }

    std::cin >> x;

    // Checar se a matriz tem valor X
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == x) {
                enc = true;
                break;
            }
        }
        if (enc) {
            break;
        }
    }

    // Saida
    if (enc) {
        std::cout << "Matriz tem elemento " << x << std::endl;
    } else {
        std::cout << "Matriz não tem elemento " << x << std::endl;
    }

    return 0;
}