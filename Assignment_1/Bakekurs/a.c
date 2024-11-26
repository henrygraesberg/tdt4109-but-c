#include<stdio.h>
#include<stdlib.h>

int main() {
  printf("Hvor mange cookies ønsker du å bake? ");

  char *inString = malloc(sizeof(inString));
  fgets(inString, sizeof(inString), stdin);

  int converted = atoi(inString);
  free(inString);
  inString = NULL;

  char* ingredientName[] = {"sukker (g)", "smør (g)", "sjokolade (g)", "egg", "hvetemel (g)"};

  float ingredientCount[] = {400.0/48.0, 320.0/48.0, 500.0/48.0, 2.0/48.0, 460.0/48.0};

  for(int i = 0; i < sizeof(ingredientCount); i++) {
    printf("%s: %.1f\n", ingredientName[i], ingredientCount[i] * converted);
  }

  //! Code works, but segmenation fault occurs on runtime
  //TODO: Figure it out??? (Maybe)
  return 0;
}
