#include <stdio.h>
struct Student {
char firstname[50];
char lastname[50];
char age[100];
int id;
};
void printStudent(struct Student* student)
{
printf(" first name:%s\n", student->firstname);
printf(" last name:%s\n", student->lastname);
printf(" age:%s\n", student->age);
printf(" student ID:%d\n", student->id);
}
