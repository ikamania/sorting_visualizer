#include "pair.h"

#include <raylib.h>


void apply_state(struct Pair *pair, int state) {
    pair->state = state;

    switch (state) {
        case NORMAL:
            pair->color_a = YELLOW;
            pair->color_b = YELLOW;
            break;

        case HIGHLIGHT:
            pair->color_a = GREEN;
            pair->color_b = RED;
            break;

        case SORTED:
            pair->color_a = RED;
            pair->color_b = GREEN;
            break;
    }
}
