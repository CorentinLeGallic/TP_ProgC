#include <stdio.h>

int getStringLength(char* string){
  int result = 0;

  while(*string != '\0'){
    result++;
    string++;
  }

  return result;
}

void copyString(char* string1, char* string2){
  while(*string1 != '\0'){
    *string2 = *string1;
    string1++;
  }
}


*char concatStrings(char* string1, char* string2){
  char result[] = string1;

  int i = 0;
  
  while(*string2 != '\0'){
    string1[getStringLength(string1) + i] = *string2;
    i++;
    string2++;
  }

  result[getStringLength(string1) + getStringLength(string2)] = '\0';

  return result;
}

int main(){

  printf("String length : %d\n", getStringLength("Coucou"));

  char test1[100] = "Hello, ";
  char test2[100] = "World !";

  printf("Concat string : %s\n", concatStrings(test1, test2));

  copyString(test1, test2);

  printf("Copied string : %s\n", test2);

  return 0;
}

