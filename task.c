#include <stdio.h>
#include <stdlib.h>
#include <float.h>

const double END_OF_ARRAY = -DBL_MAX;

void show_menu() {
  printf("1. Выделить память\n2. Заполнить ячейки данными\n3. Показать данные на экран\n4. Освободить занимаемую память\n0. Выход\n");
}

void print_memory(double *pointer) {
  for (int i = 0; pointer[i] != END_OF_ARRAY; ++i) {
    printf("%lf\n", pointer[i]);
  }
}

double *allocate_memory() {
  int size;
  printf("Сколько чисел double?\n");
  scanf("%d", &size);
  double *new_pointer = malloc((size + 1) * sizeof(double));

  new_pointer[size] = END_OF_ARRAY;
  return new_pointer;
}

void fill_memory(double *pointer) {
  printf("Введите числа:\n");

  for(int i = 0; pointer[i] != END_OF_ARRAY; ++i) {
    scanf("%lf", &pointer[i]);
  }
}

int main() {
  int action;
  double *pointer;

  while(1) {
    show_menu();
    scanf("%d", &action);
    switch(action) {
      case 0:
        exit(0);
        break;
      case 1:
        pointer = allocate_memory();
        break;
      case 2:
        fill_memory(pointer);
        break;
      case 3:
        print_memory(pointer);
        break;
      case 4:
        free(pointer);
        break;
    }
  }
}