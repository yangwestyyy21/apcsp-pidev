#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  int d = 1;
  int e = 2;
  int * ptrtod = &d;
  int * ptrtoe = &e;
  printf("the address of d is %d\n", &d);
  printf("the address of e is %d\n", &e);
  printf("d = %d, e = %d \n", d, e); 
  int * ptrtod = e;
  int d = * ptrtod;
  int * ptrtoe = 1;
  int e = * ptrtoe;
  
}
