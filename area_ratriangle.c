/*
Program to find area of right angled triangle
given base and height.
*/

#include <stdio.h>

int main()
{
  float base, height, area;

  printf("Enter Base: ");
  scanf("%f", &base);

  printf("Enter Height: ");
  scanf("%f", &height);

  area = 0.5 * base * height;

  printf("\nThe Area of the triangle: %.2f", area);

  return 0;

}
