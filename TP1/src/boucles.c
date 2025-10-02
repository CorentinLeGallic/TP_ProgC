#include <stdio.h>

// With for loops
/*int main() {
  int compteur = 9;

  for(int i = 0; i < compteur; i++) {
    for(int j = 0; j < i; j++){
      printf(i == compteur - 1 || j == 0 || j == i - 1 ? "*" : "#");
    }
    printf("\n");
  }
  
  return 0;
}*/

// With while loops
int main() {
  int compteur = 9;

  int i = 0;

  while(i < compteur){
    int j = 0;

    while(j < i){
      printf(i == compteur - 1 || j == 0 || j == i - 1 ? "*" : "#");
    }

    printf("\n");
    i++;
  }
  
  return 0;
}
