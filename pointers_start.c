#include <stdio.h>

int main() {
  int array[2] = { 6, 200 };
  int *pointer = &array[0];
  printf("pointer: %d\n", pointer);
  printf("*pointer: %d\n", *pointer);
  printf("*pointer + 1: %d\n", *pointer + 1);
  printf("pointer + 1: %d\n", pointer + 1);
  printf("*(pointer + 1): %d\n", *(pointer + 1));

  printf("pointer[0]: %d\n", pointer[0]); // *pointer
  printf("pointer[1]: %d\n", pointer[1]); // *(pointer + 1)
  printf("pointer[2]: %d\n", pointer[2]); // *(pointer + 2)
  printf("pointer[3]: %d\n", pointer[10]); // *(pointer + 2)

  return 0;
}