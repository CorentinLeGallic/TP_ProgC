#include <stdio.h>

int compute(num1, num2, op){
  switch(op){
    case '+':
      return num1 + num2;
    case '-':
      return num1 - num2;
    case '*':
      return num1 * num2;
    case '/':
      return num1 / num2;
    case '%':
      return num1 % num2;
    case '&':
      return num1 & num2;
    case '|':
      return num1 | num2;
    case '~':
      return ~num1;
  }
}

int main() {
  // Test case 1: Basic addition
  int num1 = 5, num2 = 3;
  char* op = "+";
  printf("Test 1: %d %s %d = %d\n", num1, op, num2, compute(num1, num2, op));

  // Test case 2: Basic subtraction
  num1 = 5, num2 = 3;
  op = "-";
  printf("Test 2: %d %s %d = %d\n", num1, op, num2, compute(num1, num2, op));

  // Test case 3: Basic multiplication
  num1 = 5, num2 = 3;
  op = "*";
  printf("Test 3: %d %s %d = %d\n", num1, op, num2, compute(num1, num2, op));

  // Test case 4: Basic division
  num1 = 6, num2 = 3;
  op = "/";
  printf("Test 4: %d %s %d = %d\n", num1, op, num2, compute(num1, num2, op));

  // Test case 5: Basic modulo
  num1 = 5, num2 = 2;
  op = "%";
  printf("Test 5: %d %s %d = %d\n", num1, op, num2, compute(num1, num2, op));

  // Test case 6: Basic bitwise AND
  num1 = 5, num2 = 3;
  op = "&";
  printf("Test 6: %d %s %d = %d\n", num1, op, num2, compute(num1, num2, op));

  // Test case 7: Basic bitwise OR
  num1 = 5, num2 = 3;
  op = "|";
  printf("Test 7: %d %s %d = %d\n", num1, op, num2, compute(num1, num2, op));

  // Test case 8: Basic bitwise NOT
  num1 = 5;
  op = "~";
  printf("Test 8: %s%d = %d\n", op, num1, compute(num1, 0, op)); // num2 is not used for ~

  // Test case 9: Addition with negative numbers
  num1 = -5, num2 = 3;
  op = "+";
  printf("Test 9: %d %s %d = %d\n", num1, op, num2, compute(num1, num2, op));

  // Test case 10: Subtraction with negative result
  num1 = 3, num2 = 5;
  op = "-";
  printf("Test 10: %d %s %d = %d\n", num1, op, num2, compute(num1, num2, op));

  // Test case 11: Multiplication by zero
  num1 = 5, num2 = 0;
  op = "*";
  printf("Test 11: %d %s %d = %d\n", num1, op, num2, compute(num1, num2, op));

  // Test case 12: Division by one
  num1 = 5, num2 = 1;
  op = "/";
  printf("Test 12: %d %s %d = %d\n", num1, op, num2, compute(num1, num2, op));

  // Test case 13: Modulo with negative numbers
  num1 = -5, num2 = 2;
  op = "%";
  printf("Test 13: %d %s %d = %d\n", num1, op, num2, compute(num1, num2, op));

  // Test case 14: Bitwise AND with zero
  num1 = 5, num2 = 0;
  op = "&";
  printf("Test 14: %d %s %d = %d\n", num1, op, num2, compute(num1, num2, op));

  // Test case 15: Bitwise OR with all ones
  num1 = 5, num2 = -1; // -1 is all ones in binary
  op = "|";
  printf("Test 15: %d %s %d = %d\n", num1, op, num2, compute(num1, num2, op));

  // Test case 16: Bitwise NOT with a positive number
  num1 = 5;
  op = "~";
  printf("Test 16: %s%d = %d\n", op, num1, compute(num1, 0, op));
  
  return 0;
}

