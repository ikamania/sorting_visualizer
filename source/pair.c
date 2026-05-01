#include "pair.h"

#include <raylib.h>

#define CYAN (Color){ 0, 255, 255, 255 }


void apply_pair_colors(struct Pair* pair) {
    switch (pair->state) {
        case STATE_COMPARING:
            pair->f_c = CYAN;
            pair->s_c = CYAN;
            break;
        case STATE_COMPARED:
            pair->f_c = RED;
            pair->s_c = GREEN;
            break;
    }
}
