#ifndef CONFIG_H 
#define CONFIG_H


struct RGB {
  int r;
  int g;
  int b;
};


struct Config {
    int window_w;
    int window_h;

    int list_size;
    int sort_speed;

    struct RGB bg_color;
    struct RGB li_color; // list item color
};


struct Config load_config(const char* path);

#endif
