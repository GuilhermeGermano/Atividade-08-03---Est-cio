#include <stdio.h>

int main() {
    int array[4] = {10, 20, 30, 40, 50};
    int i;

    printf("Valores do array:\n");
    for (i = 0; i < 4; i++) {
        printf("%d ", array[i]);
    }

    printf("Enderecos das variaveis:\n");
    for (i = 0; i < 4; i++) {
        printf("&array[%d] = %p\n", i, &array[i]);
    }

    return 0;
}