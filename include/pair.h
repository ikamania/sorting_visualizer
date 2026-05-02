#ifndef PAIR_H
#define PAIR_H

#include <raylib.h>

#define NORMAL 0
#define HIGHLIGHT 1
#define SORTED 2


struct Pair {
    int a;
    int b;

    Color color_a;
    Color color_b;

    int state;
};

void apply_state(struct Pair* pair, int state);

#endif
