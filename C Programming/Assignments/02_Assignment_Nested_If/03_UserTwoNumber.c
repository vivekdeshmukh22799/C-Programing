#include <stdio.h>
int main() {
  char op;
  int result, num1, num2;
 
  printf("Enter operator = ");
  scanf("%c",&op);
  
  if(op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
  {
  
  printf("Enter num1 = ");
  scanf("%d",&num1);
  
  printf("Enter num2 = ");
  scanf("%d",&num2);

    if (op == '+')
    {
      result = num1 + num2;
      printf("ans is : %d", result);
    }
    else if (op == '-')
    {
      result = num1 - num2;
      printf("ans is : %d", result);
    }
    else if (op == '*')
    {
      result = num1 * num2;
      printf("ans is : %d", result);
    }
    else if (op == '/')
    {
      result = num1 / num2;
      printf("ans is : %d", result);
    }
    else if (op == '%')
    {
      result = num1 % num2;
      printf("ans is : %d", result);
    }
  }
  else
  {
    printf("\nInvalid operator entered");
  }
  return 0;
}
