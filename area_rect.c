// Program to find area of rectangle given base and height

#include <stdio.h>

int main()
{
  float length, height;
  printf("Enter Length: ");
  scanf("%f", &length);

  printf("Enter Height: ");
  scanf("%f", &height);

  printf("\nArea of rectangle: %0.2f", length * height);

  return 0;

}
