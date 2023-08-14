#include <stdio.h>

int main() {
    int a = 8;
    int b = 16;
    int c = 19;
    int sum = a + b;
    int difference = b - a;
    int product = a * b;
    int quotient = b / a ;
    int modulus = c % b;
    printf("sum of: %d and %d is %d \n",a,b,sum );
    printf("difference of; %d and %d is %d \n",b,a,difference );
    printf("product of: %d and %d is d \n",a,b,product );
    printf("quotient of: %d and %d is %d \n",b,a,quotient );
    printf("modulus of: %d and %d is %d \n",c,b,modulus );

    return 0;
}