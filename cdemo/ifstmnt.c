#include <stdio.h>

int main()
{
  int a = 0;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  
  int b = 3;

  if (b !=2)
  printf("b isn't 2");

  if (a < b)
  {
    printf("a is smaller than b");
  }    

  int c = 3;
  
  if (b >= c)
  printf("b is larger than or equal to c");

  if (b == c && !(b == 0))
  printf("b and c are not equal to 0");

  if (b == 3 || c == 3)
  printf("either b or c is equal to 3");
}
