#include "base/base.h"
#include <stdio.h>

#define EvalPrint(x) printf("%s = %d\n", #x, (s32)(x))

int main() {
  printf("GCC:           %d\n", COMPILER_GCC);
  printf("CLANG:         %d\n", COMPILER_CLANG);
  printf("VISUAL STUDIO: %d\n", COMPILER_CL);

  printf("MAC:     %d\n", OS_MAC);
  printf("LINUX:   %d\n", OS_LINUX);
  printf("WINDOWS: %d\n", OS_WINDOWS);

  OperatingSystem os = operating_system_from_context();
  char* os_string = string_from_operating_system(os);
  printf("os = %s\n", os_string);

  char* february_string = string_from_month(Month_Feb);
  printf("february = %s\n", february_string);

  char* tuesday_string = string_from_day_of_week(DayOfWeek_Tuesday);
  printf("tuesday = %s\n", tuesday_string);

  return 0;
}
