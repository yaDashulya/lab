#include <stdio.h>


//<man> This function gets your name and says hello
void func2()
{
  printf("!\n");

  char k[100];
  printf("Enter your name\n");
  scanf("%100s", k);
  printf("Hello, ");
  printf(k);
  printf("\n");
}

//<man> This function actually does nothing
void funcf()
{
}
