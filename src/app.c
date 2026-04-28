#include "app.h"
#include <raylib.h>


void run_app(void) {
    InitWindow(800, 600, "Sorting Visualizer");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE); // fill background with white
        EndDrawing();
    }

    CloseWindow();
}
