#include <stdio.h>
int main()
{
    int a = 10, b = 100, c = 1000;
    int *x = &a;
    int *y = &b;
    int *z = &c;
    // calling values by their reference..
    printf("Value of a:%d\n", *x);
    printf("Value of b:%d\n", *y);
    printf("Value of c:%d", *z);
    return 0;
}
