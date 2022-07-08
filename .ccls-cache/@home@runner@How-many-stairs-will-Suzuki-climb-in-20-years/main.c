#include <stdio.h>
int stairs_in_20(const int stairs[7][52]) {
  int i,j,sum=0;
  for(i=0;i<7;i++){
   for(j=0;j<52;j++){
     sum+=stairs[i][j];
   } 
  }
  return sum*20;
}

int main(void) {
  printf("Hello World\n");
  return 0;
}