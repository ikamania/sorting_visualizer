#include "app.h"
#include "config.h"
#include "array.h"
#include "renderer.h"
#include "sort.h"

#include <raylib.h>
#include <stdlib.h>


void run_app(void) {
    struct Config config = load_config("config/config.ini");
    int* items = create_shuffled_array(config.list_size);

    InitWindow(config.window_w, config.window_h, "Sorting Visualizer");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(config.bg_color);

        for (int k = 0; k < config.sort_speed; k++) {
            bubble_sort_step(items, config.list_size);
        }
        draw_bars(items, &config);

        EndDrawing();
    }
    CloseWindow();
    free(items);
}
