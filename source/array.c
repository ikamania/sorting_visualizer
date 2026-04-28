#include <stdlib.h>


int* create_shuffled_array(int n) {
    int *arr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);

        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    return arr;
}
