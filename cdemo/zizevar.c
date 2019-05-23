#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("int size %d, float size %d, char size %d, double size %d", sizeof(int), sizeof(float), sizeof(char), sizeof(double));
}

