#include "config.h"
#include <stdio.h>


struct Config load_config(const char* path) {
    FILE *file = fopen(path, "r");

    if (file == NULL) {
        printf("Could not read config");
        return (struct Config){0};
    }

    char line[256];
    struct Config config;

    while (fgets(line, sizeof(line), file)) {
        sscanf(line, "window_w=%d", &config.window_w);
        sscanf(line, "window_h=%d", &config.window_h);

        sscanf(line, "list_size=%d", &config.list_size);
        sscanf(line, "sort_speed=%d", &config.sort_speed);

        sscanf(line, "bg_color=%hhu,%hhu,%hhu",
            &config.bg_color.r,
            &config.bg_color.g,
            &config.bg_color.b);

        sscanf(line, "li_color=%hhu,%hhu,%hhu",
            &config.li_color.r,
            &config.li_color.g,
            &config.li_color.b);

        config.bg_color.a = 255;
        config.li_color.a = 255;
    }
    fclose(file);

    return config;
};
