#include <stdio.h>

int main() {
    int N[] = {1, 4, 7, 8, 3, 2, 5, 6, 0};
    int largo = sizeof(N) / sizeof(N[0]);

    for (int i = 0; i < largo; i++) {
        int m = i;
        for (int j = i + 1; j < largo; j++) {
            if (N[j] < N[m]) {
                m = j;
            }
        }
        // Intercambiar N[m] y N[i]
        int temp = N[m];
        N[m] = N[i];
        N[i] = temp;
    }

    // Imprimir arreglo ordenado
    for (int i = 0; i < largo; i++) {
        printf("%d ", N[i]);
    }

    return 0;
}
