#include <stdio.h>

int main() {
    int numeros[10];
    int sumaPares = 0;
    int cantidadPares = 0;

    printf("Introduce 10 números enteros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            sumaPares += numeros[i];
            cantidadPares++;
        }
    }

    if (cantidadPares > 0) {
        float mediaPares = (float)sumaPares / cantidadPares;
        printf("\nLa suma de los números pares es: %d\n", sumaPares);
        printf("Cantidad de números pares: %d\n", cantidadPares);
        printf("Media aritmética de los números pares: %.2f\n", mediaPares);
    } else {
        printf("\nNo se ingresaron números pares.\n");
    }

    return 0;
}
