// Program to find Total price with discount of 3 products with
// quantity and price as input

#include <stdio.h>

int main()
{
  float total_price = 0;

  for (int i=1; i<4; i++) 
{
    int quant, price;

    printf("\nEnter quantity of product: ");
    scanf("%d", &quant);

    printf("Enter price: ");
    scanf("%d", &price);

    total_price += quant * price;

}
  float disc_price = total_price * 0.95;

  printf("The price after discount is: %.2f", disc_price);
}
