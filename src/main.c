#include "base/base.h"
#include <stdio.h>

int main() {
  printf("GCC:           %d\n", COMPILER_GCC);
  printf("CLANG:         %d\n", COMPILER_CLANG);
  printf("VISUAL STUDIO: %d\n", COMPILER_CL);

  printf("MAC:     %d\n", OS_MAC);
  printf("LINUX:   %d\n", OS_LINUX);
  printf("WINDOWS: %d\n", OS_WINDOWS);

  return 0;
}
