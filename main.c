#include <stdio.h>
#include <stdlib.h>
#include "array.c"

const int NUM_CHARS = 100;
const int NUM_WORDS = 10;

int main() {
  char **array_of_words = malloc(NUM_WORDS * sizeof(char *));
  for(int i = 0; i < NUM_WORDS; ++i) {
    array_of_words[i] = malloc(NUM_CHARS * sizeof(char));
  }

  input_words(array_of_words, NUM_WORDS);
  output_words(array_of_words, NUM_WORDS);

  return 0;
}