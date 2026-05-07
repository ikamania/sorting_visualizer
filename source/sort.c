#include "pair.h"
#include "sort.h"


void swap(int* x, int* y) {
    int z = *x;
    *x = *y;
    *y = z;
};


void (*get_algorithm(enum Algorithm algorithm))(int* items, int, struct Pair* pair) {
    switch (algorithm) {
        case BUBBLE_SORT:
            return bubble_sort_step;
        case SELECTION_SORT:
            return selection_sort_step;
    }
    return bubble_sort_step;
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


void selection_sort_step(int* items, int size, struct Pair* pair) {
    static int i = 0;
    static int j = 0;
    static int c = 1;

    if (c == size) return;

    if (j == size - c) {
        if (items[i] > items[j]) swap(&items[i], &items[j]);

        apply_state(pair, SORTED);

        j = 0;
        i = 0;
        c++;

        return;
    }

    if (items[i] < items[j]) {
        i = j;

        pair->b = -1;

        apply_state(pair, HIGHLIGHT);
    } else {
        if (j != size - c) j++;

        pair->b = j;
        apply_state(pair, HIGHLIGHT);
    }

    pair->a = i;
}
