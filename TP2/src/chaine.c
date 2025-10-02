#include <stdio.h>

int getStringLength(char* string){
  int result = 0;

  while(*string != '\0'){
    result++;
    string++;
  }

  return result;
}

int main(){

  printf("String length : %d", getStringLength("Coucou"));
  
  return 0;
}
