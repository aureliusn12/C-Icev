#include <stdio.h>

int main() {
    // Definindo uma matriz 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Valores da diagonal secundária:\n");
    // A diagonal secundária de uma matriz 3x3 está nas posições (0,2), (1,1) e (2,0)
    for(int i = 0; i < 3; i++) {
        printf("%d ", matriz[i][3 - 1 - i]);
    }
    printf("\n");
}