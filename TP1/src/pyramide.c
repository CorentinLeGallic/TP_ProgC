#include <stdio.h>

int main(){
  int n = 9;
  int pyramidWidth = n*2 - 1;

  for(int i = 1; i <= n; i++){
    int levelWidth = i*2 - 1;
    int spaceCounts = (pyramidWidth - levelWidth) / 2;

    for(int j = 0; j < pyramidWidth / 2; j++){
      if(j < spaceCounts) {
        printf(" ");
      } else {
        printf("%i", j - spaceCounts + 1);
      }
    }

    printf("%i", i);

    for(int j = pyramidWidth / 2; j > 0; j--){
      if(j < spaceCounts) {
        printf(" ");
      } else {
        printf("%i", j - spaceCounts + 1);
      }
    }

    printf("\n");
  }
  
  return 0;
}
