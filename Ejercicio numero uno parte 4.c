#include <stdio.h>

int main() {
    int suma = 0;
    int producto = 1;

    for (int x = 20; x <= 400; x++) {
        if (x % 2 == 0) {
            suma += x;
            producto *= x;
        }
    }

    printf("La suma de los números es: %d\n", suma);
    printf("El producto de los números es: %d\n", producto);

    return 0;
}