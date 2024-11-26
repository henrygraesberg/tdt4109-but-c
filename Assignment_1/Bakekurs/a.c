#include<stdio.h>
#include<stdlib.h>

int main() {
  printf("Hvor mange cookies ønsker du å bake? ");

  char *inString = malloc(sizeof(inString));
  fgets(inString, sizeof(inString), stdin);

  int converted = atoi(inString);

  char* ingredientName[] = {"sukker (g)", "smør (g)", "sjokolade (g)", "egg", "hvetemel (g)"};
  int ingredientArraySize = sizeof(ingredientName) / sizeof(ingredientName[0]);

  float ingredientCount[] = {400.0/48.0, 320.0/48.0, 500.0/48.0, 2.0/48.0, 460.0/48.0};

  for(int i = 0; i < ingredientArraySize; i++) {
    printf("%s: %.1f\n", ingredientName[i], ingredientCount[i] * converted);
  }

  return 0;
}
