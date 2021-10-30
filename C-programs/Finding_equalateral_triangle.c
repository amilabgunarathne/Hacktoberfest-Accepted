#include <stdio.h>

int main()
{
     int side1=3;
     int side2=3;
      int side3=4;

    if(side1==side2 && side2==side3) 
    {
        /* If all sides are equal */
        printf("Equilateral triangle.\n");
    }
    else if(side1==side2 || side1==side3 || side2==side3) 
    {
        /* If any two sides are equal */
        printf("Isosceles triangle.\n");
    }
    else 
    {
        /* If none sides are equal */
        printf("Scalene triangle.\n");
    }

    return 0;
}


