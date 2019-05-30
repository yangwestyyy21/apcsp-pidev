#include <stdio.h>
struct Student {
char firstname[50];
char lastname[50];
char age[100];
int id;
};
void printStudent(struct Student* student)
{
printf(" first name:%s\n", Student->firstname);
printf(" last name:%s\n", Student->lastname);
printf(" age:%s\n", Student->age);
printf(" student ID:%d\n", Student->id);
}
