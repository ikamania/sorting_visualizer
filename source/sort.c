#include "pair.h"


void swap(int* x, int* y) {
    int z = *x;
    *x = *y;
    *y = z;
};


void bubble_sort_step(int* items, int size, struct Pair* pair) {
    static int i = 0;
    static int j = 0;

    if (i >= size - 1) return;

    switch (pair->state) {
        case STATE_COMPARING:
            apply_pair_colors(pair);
            break;
        case STATE_COMPARED:
            swap(&items[pair->f], &items[pair->s]);
            apply_pair_colors(pair);
            
            pair->state = STATE_COMPARING;

            return;
    }

    if (j < size - i - 1) {
        if (items[j] > items[j + 1]) {
            pair->f = j;
            pair->s = j + 1;
            pair->state = STATE_COMPARED;
        }
        j++;
    } else {
        j = 0;
        i++;
    }

}
