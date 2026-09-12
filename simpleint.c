// Program to calculate simple interest given 
// Principle, rate(%) and time(yrs)

#include <stdio.h>

int main()
{
  int pr;
  float rate, time;
  printf("Enter Principle: ");
  scanf("%d", &pr);

  printf("Enter Rate(%%): ");
  scanf("%f", &rate);

  printf("Enter Time(years): ");
  scanf("%f", &time);

  float si = (pr * rate * time)/100;

  printf("\nSimple Interest: %0.2f\n", si);

  return 0;

}
