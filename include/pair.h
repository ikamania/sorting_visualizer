#ifndef SWAP_INDICES_H
#define SWAP_INDICES_H

#include <raylib.h>

#define STATE_COMPARING 0
#define STATE_COMPARED 1


struct Pair {
  int f;
  int s;

  int state;

  Color f_c;
  Color s_c;
};


void apply_pair_colors(struct Pair* pair);


#endif
