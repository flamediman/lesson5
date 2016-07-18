#ifndef MAIN_ARRAY
#define MAIN_ARRAY

void input_words(char **words, int num_words) {
  for (int i = 0; i < num_words; i++ ) {
    scanf("%s", words[i]);
  }
}

void output_words(char **words, int num_words) {
  for (int i = 0; i < num_words; i++ ) {
    printf("%s\n", words[i]);
  }
}
#endif