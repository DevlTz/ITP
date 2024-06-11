#include <iostream>

int main() {
    int num_pags, num_digit, digit;

    std::cin >> num_pags >> num_digit;
    bool paginas[num_pags + 1] = { false };

    for(int i = 0; i < num_digit; i++) {
        std::cin >> digit;
        paginas[digit] = true;
    }
    for(int i = 1; i <= num_pags; i++) {
        if (paginas[i] == false) {
            std::cout << i << " ";
        }
    }
    return 0;
}