/*WAP using switch case for arithmetic operation on two numbers, if user enters an operator as choice, the appropriate operation should perform.
If user enters wrong choice appropriate message should get displayed.
i.e. + is for addition
     - is for subtraction */
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