#include <stdio.h>

int main()
{
  float rad, area;

  printf("Enter the Radius: ");
  scanf("%f", &rad);

  area = 3.141 * rad * rad;

  printf("\nThe Area of the Circle: %.2f", area);

  return 0;

}
