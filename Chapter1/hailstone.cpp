#include <iostream>

int N = 100;

int hailstone(int n);

int main() {
    for (int i = 1; i < N; i++) {
        std::cout << "hailstone(" << i << "): ";
        hailstone(i);
    }
    return 0;
}

int hailstone(int n) {
    int length = 1;
    std::cout << n << " ";
    while (1 < n) {
        (n % 2) ? (n = 3*n+1) : (n /= 2);
        length++;
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return length;
}
