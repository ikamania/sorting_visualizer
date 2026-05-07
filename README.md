# Sorting Visualizer

A **sorting visualizer** written in C that demonstrates how different sorting algorithms work through real-time graphical animations. The program visualizes the sorting process step by step, allowing users to observe how data is compared, swapped, and organized.

---

## Requirements

- C compiler (GCC, Clang, etc.)
- raylib

---

## Usage

1. Clone the repository:

```bash
git clone https://github.com/ikamania/sorting_visualizer.git
cd sorting_visualizer
```

2. Build and run the application:
```bash
make run
```

---

## Configuration

The project includes a `config/config.ini` file that allows customization of the visualization settings without recompiling the program.

### Available Settings

- `window_w` / `window_h` — window dimensions
- `bg_color` — background RGB color
- `li_color` — bar RGB color
- `list_size` — number of elements to sort
- `sort_speed` — controls animation speed of the sorting visualization
- `algorithm` — sorting algorithm selection
