#include <stdio.h>

int ehPalindromo(unsigned long long n) {
    if (n < 10) return 1;
    unsigned long long original = n, invertido = 0;
    while (n > 0) {
        invertido = invertido * 10 + n % 10;
        n = n / 10;
    }
    return original == invertido;
}

int main() {
    unsigned long long inicio, fim;
    scanf("%llu %llu", &inicio, &fim);
    for (unsigned long long i = inicio; i <= fim; i++)
        if (ehPalindromo(i)) printf("%llu\n", i);
    return 0;
}
