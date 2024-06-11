#include <iostream>

int main() {
    double tempo1, tempo2, tempo3, melhor_tempo, nota_corte;

    // Ler os tempos do atleta
  
    std::cin >> tempo1;

    std::cin >> tempo2;

    std::cin >> tempo3;

    // Encontrar o melhor tempo do atleta
    if (tempo1 <= tempo2 && tempo1 <= tempo3) {
        melhor_tempo = tempo1;
    } else if (tempo2 <= tempo1 && tempo2 <= tempo3) {
        melhor_tempo = tempo2;
    } else {
        melhor_tempo = tempo3;
    }

    // Ler a nota de corte

    std::cin >> nota_corte;

    // Verificar se o atleta foi aprovado ou reprovado
    if (melhor_tempo <= nota_corte) {
        std::cout << "Atleta aprovado com tempo " << melhor_tempo << "s e nota de corte " << nota_corte << "s\n";
    } else {
        std::cout << "Atleta reprovado com tempo " << melhor_tempo << "s e nota de corte " << nota_corte << "s\n";
    }

    return 0;
}