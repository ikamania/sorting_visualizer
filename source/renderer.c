#include "renderer.h"
#include "config.h"
#include <raylib.h>


void draw_bars(int* arr, const struct Config* config) {
    float w = (float)config->window_w / config->list_size; 
    float h = (float)config->window_h / config->list_size;

    for (int i = 0; i < config->list_size; i++) {
        DrawRectangle(
            i * w,
            config->window_h - arr[i] * h,
            w,
            h * arr[i],
            config->li_color
        );
    }
}
