#include <iostream>

int main() {
    int a, b, c;
    
    // Ler os números informados pelas crianças
    
    std::cin >> a;

    
    std::cin >> b;


    std::cin >> c;

    // Determinar com qual brinquedo cada criança está
    if (a > 0) {
        std::cout << a << " ";
    } else if (b > 0 && a != 1 && c != 1) {
        std::cout << "1 ";
    } else {
        std::cout << "2 ";
    }

    if (b > 0) {
        std::cout << b << " ";
    } else if (a > 0 && b != 2 && c != 2) {
        std::cout << "2 ";
    } else {
        std::cout << "3 ";
    }

    if (c > 0) {
        std::cout << c << std::endl;
    } else if (a > 0 && c != 3 && b != 3) {
        std::cout << "3\n";
    } else {
        std::cout << "1\n";
    }

    return 0;
}