
#include <stdio.h>

struct teste{
  int x;
  char nome[5];
};

int main(void) {
  struct teste *s;
  s->x = 3;
  sprintf(s->nome, "%s", "Jose");
  printf("%d\n", (*s).x); 
  printf("%s\n", (*s).nome);

  return 0;
}