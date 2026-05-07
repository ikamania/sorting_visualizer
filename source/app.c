#include "app.h"
#include "config.h"
#include "array.h"
#include "renderer.h"
#include "sort.h"
#include "pair.h"

#include <raylib.h>
#include <stdlib.h>


void run_app(void) {
    struct Config config = load_config("config/config.ini");
    int* items = create_shuffled_array(config.list_size);

    struct Pair pair = {0, 1, YELLOW, YELLOW, NORMAL};

    void (*sort_function)(int* items, int, struct Pair* pair);
    sort_function = get_algorithm(config.algorithm);

    int FPS = 60;

    int frame_delay = FPS + 1 - config.sort_speed;
    int frame_counter = 0;

    InitWindow(config.window_w, config.window_h, "Sorting Visualizer");
    SetTargetFPS(FPS);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(config.bg_color);

        draw_bars(items, &config, &pair);

        if (frame_counter == 0) {
            sort_function(items, config.list_size, &pair);

            frame_counter = frame_delay;
        } else frame_counter--;

        EndDrawing();
    }
    CloseWindow();
    free(items);
}
