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

    int FPS = 60;

    InitWindow(config.window_w, config.window_h, "Sorting Visualizer");
    SetTargetFPS(FPS);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(config.bg_color);

        draw_bars(items, &config, &pair);

        if (FPS == 0) {
            FPS = 60;
            for (int k = 0; k < config.sort_speed; k++) {
                bubble_sort_step(items, config.list_size, &pair);
            }
        } else FPS--;

        EndDrawing();
    }
    CloseWindow();
    free(items);
}
