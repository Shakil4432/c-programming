#include <stdio.h>
int main()
{
    float discount, after_discount_price;
    scanf("%f %f", &discount, &after_discount_price);
    float before_discount;
    before_discount = after_discount_price / ((1 - (discount / 100)));
    printf("%0.2f", before_discount);
    return 0;
}