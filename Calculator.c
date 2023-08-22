#include <stdio.h>
void main() {

  char operator;
  float firstnum, secondnum;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operator);
  printf("Enter two operands: ");
  scanf("%f %f", &firstnum, &secondnum);

  switch (operator) {
    case '+':
      printf("%f + %f = %f", firstnum, secondnum, firstnum + secondnum);
      break;
    case '-':
      printf("%f - %f = %f", firstnum, secondnum, firstnum - secondnum);
      break;
    case '*':
      printf("%f * %f = %f", firstnum, secondnum, firstnum * secondnum);
      break;
    case '/':
      printf("%f / %f = %f", firstnum, secondnum, firstnum / secondnum);
      break;
      
    default:
      printf("Wrong Input, Select the Appropriate Operator");
  }
}