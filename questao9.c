
#include <stdio.h>
<<<<<<< Updated upstream

struct teste{
  int x = 3;
  char nome[] = "jose";
};
int main(void){
  struct teste *s;
  printf("%d", s->x);
  printf("%s", s->name);

  return 0;
=======
#include <stdlib.h>

struct teste{
    
    int x = 3;
    char nome[10]={"Jose"};
};

int main(void){
    struct teste *s;
    printf("%d", s->x);
    printf("%s", s->nome[10]);
>>>>>>> Stashed changes
}