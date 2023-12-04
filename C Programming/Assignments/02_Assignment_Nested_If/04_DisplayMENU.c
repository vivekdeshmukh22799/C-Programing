#include<stdio.h>
int main()
{
  int num, res, program, salary;
  printf("Enter the number : ");
  scanf("%d", &num);
  printf("\nPress 1 for Even Odd");
  printf("\nPress 2. Basic Salary");
  printf("\nEnter 1 or 2 from the above menu : \n");
  scanf("%d", &program);

  if (program == 1)
  {
    if (num % 2 == 0)
    {
      printf("number is even");
    }
    else
    {
      printf("number is odd");
    }
  }
  else
  {
    if (program == 2 && num>0)
    {
      salary = num * 30;
      printf("your salary is equal to : %d\n", salary);
    }
    else
    {
      printf("salary is invalid");
    }
  }
    return 0;
}
