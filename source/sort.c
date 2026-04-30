void swap(int* x, int* y) {
    int z = *x;
    *x = *y;
    *y = z;
};


void bubble_sort_step(int* items, int size) {
    static int i = 0;
    static int j = 0;

    if (i >= size - 1) return;

    if (j < size - i - 1) {
        if (items[j] > items[j + 1]) {
            swap(&items[j], &items[j + 1]);
        }
        j++;
    } else {
        j = 0;
        i++;
    }
}
