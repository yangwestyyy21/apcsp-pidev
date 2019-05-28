#include <stdio.h>

void arrayadd(int arr[], int s, int n)
{
  for (int i = 0; i < s; i++)
    arr[i] = arr[i] + n;
}

int main()
{
  int arr[100];
  for (int i = 0; i < 100; i++)
    {
    arr[i] = i * i;
    }
  int i = 0;
  arrayadd(arr, 100, 1);

  // loop to print array
  
  for (int x = 0; x < 100; x++)
    printf("%d \n", arr[x]);
}
