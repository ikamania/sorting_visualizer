#include "pair.h"


void swap(int* x, int* y) {
    int z = *x;
    *x = *y;
    *y = z;
};


void bubble_sort_step(int* items, int size, struct Pair* pair) {
    static int i = 0;
    static int j = 0;

    if (i >= size - 1 || size <= 1) return;
    
    if (items[j] > items[j + 1]) {
        switch (pair->state) {
            case NORMAL:
                apply_state(pair, HIGHLIGHT);
                return;
            case HIGHLIGHT:
                apply_state(pair, SORTED);

                swap(&items[j], &items[j + 1]);
                return;
        }
    } else {
        j++;

        if (j >= size - i - 1) {
            j = 0;
            i++;
        }

        pair->a = j;
        pair->b = j + 1;

        apply_state(pair, NORMAL);
    }
}
