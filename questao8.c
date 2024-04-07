
#include <stdio.h>

int main(void) {
  int vet[] = {4, 9, 13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ", *(vet+i));
  }

  for(i=0;i<3;i++){
  printf("%X ", vet+i);
  }

}