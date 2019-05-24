#include <stdio.h>

float Function1(float i, float area)
        {
        area = i * i * 3.14;
        }

float main()
{
float i;
float area;
for (i = 3.5; i < 12.6; i++ )
         {
         area = Function1(i, area);
         printf("The area of the circle is %f when radius is %f\n", area, i);
         }

}
