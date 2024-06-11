#include <iostream>

int main() {
    int m, n, ferteis, irrigados;

    std::cin >> m >> n;
    int campo[m][n];
    
    for(int lin = 0; lin < m; lin++) {
        for(int col = 0; col < n; col++) {
            std::cin >> campo[lin][col];
        }
    }
    ferteis = 0;
    irrigados = 0;
    for(int lin = 0; lin < m; lin++) {
        for(int col = 0; col < n; col++) {
            if (campo[lin][col] == 1) {
                ferteis++;
                bool cima     = lin > 0     && campo[lin - 1][col] == 2;
                bool baixo    = lin < m - 1 && campo[lin + 1][col] == 2;
                        bool direita  = col > 0     && campo[lin][col - 1] == 2;
                        bool esquerda = col < n - 1 && campo[lin][col + 1] == 2;
                if (cima || baixo || esquerda || direita) {
                    irrigados++;
                }
            }
        }
    }
    std::cout << irrigados << " " << ferteis - irrigados;
    return 0;
}