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


char* concatStrings(char* string1, char* string2){
  char result[] = "";
  
  int string1Length = getStringLength(string1);
  int string2Length = getStringLength(string2);

  for(int i = 0; i < string1Length; i++){
    result[i] = *string1;
    string1++;
  }


  for(int i = 0; i < string2Length; i++){
    result[string1Length + i] = *string2;
    string2++;
  }

  result[string1Length + string2Length] = '\0';

  return result;
}

int main(){

  printf("String length : %d\n", getStringLength("Coucou"));

  char test1[100] = "Hello, ";
  char test2[100] = "World !";

  printf("Concat string : %s\n", concatStrings(test1, test2, concatedString););

  copyString(test1, test2);

  printf("Copied string : %s\n", test2);

  return 0;
}








