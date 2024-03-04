#include "base/base.h"
#include "base/ds.h"
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

  DLLNode* node1 = dll_create_node(1);
  DLLNode* head = node1;
  dll_push_back(&head, 2);
  dll_push_front(&head, 3);
  dll_print(head);
  dll_delete_node(&head, head->next);
  dll_print(head);
  dll_delete_node(&head, head);
  dll_print(head); 
  dll_delete_node(&head, head);
  dll_print(head);

  return 0;
}
