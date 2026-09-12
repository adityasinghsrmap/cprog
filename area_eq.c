// Program to find Area of Equilateral triangle given its side.

#include <stdio.h>
#include <math.h>

int main()
{
  float side, area;

  printf("Enter Side: ");
  scanf("%f", &side);

  area = sqrt(3)/4 * side * side;

  printf("\nThe area is: %0.2f", area);

  return 0;

}
