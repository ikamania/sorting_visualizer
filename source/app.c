#include "app.h"
#include "config.h"
#include <raylib.h>


void run_app(void) {
    struct Config config = load_config("config/config.ini");

    InitWindow(config.window_w, config.window_h, "Sorting Visualizer");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE); // fill background with white
        EndDrawing();
    }

    CloseWindow();
}
