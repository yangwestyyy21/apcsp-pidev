#include <stdio.h>
#include <string.h>
int main()
{
  char string[] = "abcdefghijklmnopqrstuvwxyz";
  char mystring[26];
  for (int i=0; i<26; i++)
  {
  mystring[i]='a'+i;
  }

  if (strcmp(string, mystring) == 0)
    printf("the strings are identical\n");
  else
    printf("the strings are different\n");

  for (int i=0; i<26; i++)
  {
  mystring[i]='a'- 32;
  }
    if (strcmp(string, mystring) == 0)
      printf("the strings are identical\n");
    else
printf("the strings are different\n");
char str1[52];
strcpy(str1, string);
strcat(str1, mystring); 
printf("%s, %s, %s \n", string, mystring, str1);
}
