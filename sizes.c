#include <stdio.h>

int main() {
  printf("char: %lu\n", sizeof(char));
  printf("int: %lu\n", sizeof(int));
  printf("unsigned int: %lu\n", sizeof(unsigned int));
  printf("short: %lu\n", sizeof(short));
  printf("unsigned short: %lu\n", sizeof(unsigned short));
  printf("long: %lu\n", sizeof(long));
  printf("unsigned long: %lu\n", sizeof(unsigned long));
  return 0;
}