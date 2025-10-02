#include <stdio.h>

int main() {
  int compteur = 9;

  for(int i = 0; i < compteur; i++) {
    for(int j = 0; j < i; j++){
      printf(i == compteur - 1 || j == 0 || j == i - 1 ? "*" : "#");
    }
    printf("\n");
  }
  
  return 0;
}

