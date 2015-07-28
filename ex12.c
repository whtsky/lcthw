#include <stdio.h>

int main(int argc, char const *argv[]) {

  if(argc == 1) {
    printf("You have no argument.\n");
  } else if (argc > 1 && argc < 4) {
    printf("Here's your arguments:\n");

    int i;
    for(i = 0; i < argc; i++) {
      printf("%s \n", argv[i]);
    }
  } else {
    printf("Too many arguments");
  }

  return 0;
}
