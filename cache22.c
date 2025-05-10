/* cache22.c */
#include "cache22.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool scontinuation;

int main(int argc, char *argv[]) {
  while (scontinuation) {
    mainloop();
  }

  printf("ok\n");
  return EXIT_SUCCESS;
}
