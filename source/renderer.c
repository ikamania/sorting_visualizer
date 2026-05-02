#include "renderer.h"
#include "config.h"
#include <raylib.h>


void draw_bars(int* arr, const struct Config* config, struct Pair* pair) {
    float w = (float)config->window_w / config->list_size; 
    float h = (float)config->window_h / config->list_size;

    for (int i = 0; i < config->list_size; i++) {
        Color color = config->li_color;

        if (i == pair->a) color = pair->color_a;
        if (i == pair->b) color = pair->color_b;

        DrawRectangle(
            i * w,
            config->window_h - arr[i] * h,
            w,
            h * arr[i] + 10,
            color
        );
    }
}
