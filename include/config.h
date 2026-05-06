#ifndef CONFIG_H 
#define CONFIG_H

#include <raylib.h>


enum Algorithm {
    BUBBLE_SORT,
    SELECTION_SORT
};


struct Config {
    int window_w;
    int window_h;

    int list_size;
    int sort_speed;

    int algorithm;

    struct Color bg_color;
    struct Color li_color; // list item color
};


struct Config load_config(const char* path);

#endif
