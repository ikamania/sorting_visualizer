#ifndef SORT_H
#define SORT_H

#include "pair.h"
#include "config.h"


void (*get_algorithm(enum Algorithm algorithm))(int* items, int, struct Pair* pair);

void bubble_sort_step(int* items, int size, struct Pair* pair);

void selection_sort_step(int* items, int size, struct Pair* pair);

#endif
