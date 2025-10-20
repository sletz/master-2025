#include <stdio.h>

int integer_sum(int x, int y)
{
    return x+y;
}

int integer_product(int x, int y)
{
    return x-y;
}

int main()
{
    int a = 20;
    int b = 10;
    
    printf("integer sum of %d and %d : %d\n", a, b, a+b);
    printf("integer subtraction of %d an %d : %d\n", a, b, a-b);
    printf("integer product of %d and %d : %d\n", a, b, a*b);
    printf("integer quotient of %d and %d : %d\n", a, b, a/b);
    
    printf("using integer_sum: integer sum of %d and %d : %d\n", a, b, integer_sum(a,b));
    printf("using integer_product: integer product of %d and %d : %d\n", a, b, integer_product(a,b));
    
    return 0;
}
