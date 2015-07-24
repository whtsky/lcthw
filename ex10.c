#include <stdio.h>

int main(int argc, char const *argv[]) {
  // argv[0]
  printf("%s\n", argv[0]);

  int i = 0;
  // go through each string in argv
  for(i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  // let's make our own array of strings
  char *states[] = {
    "California", "Oregon",
    "Washington", "Texas"
  };
  int num_states = 4;

  for(i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;
}
