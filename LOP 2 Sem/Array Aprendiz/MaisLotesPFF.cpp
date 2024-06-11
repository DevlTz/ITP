#include <iostream>

int main() {
    int quant, lote, cont;

    std::cin >> quant;
    int lotes[quant];

    for(int i = 0; i < quant; i++) {
        std::cin >> lotes[i];
        if (lotes[i] == 2) {
            lote = i;
        }
    }

    cont = 0;
    for(int i = lote - 1; i >= 0 && lotes[i] == 0; i--) {
        cont++;
    }
    for(int i = lote + 1; i < quant && lotes[i] == 0; i++) {
        cont++;
    }
    std::cout << cont;
    return 0;       