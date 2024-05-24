#include <stdio.h>

int main() {
    int suma_pares = 0;
    int suma_impares = 0;

    for (int numero = 1; numero <= 200; numero++) {
        if (numero % 2 == 0) {
            suma_pares += numero;
        } else {
            suma_impares += numero;
        }
    }

    printf("La suma de los números pares es: %d\n", suma_pares);
    printf("La suma de los números impares es: %d\n", suma_impares);

    return 0;
}