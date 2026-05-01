#include "renderer.h"
#include "config.h"
#include "pair.h"

#include <raylib.h>


void draw_bars(int* arr, const struct Config* config, struct Pair* pair) {
    float w = (float)config->window_w / config->list_size; 
    float h = (float)config->window_h / config->list_size;

    for (int i = 0; i < config->list_size; i++) {
        Color color = config->li_color;

        if (i == pair->f) color = pair->f_c;
        if (i == pair->s) color = pair->s_c;

        DrawRectangle(
            i * w,
            config->window_h - arr[i] * h,
            w,
            h * arr[i] + 10,
            color
        );
    }
}
