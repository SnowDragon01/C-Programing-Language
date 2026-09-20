#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter an ODD number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2)
    {
        sum = sum + i;
    }
    printf("odd sum upto %d is %d ", n, sum);
    return 0;
}