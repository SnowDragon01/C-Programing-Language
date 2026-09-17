#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number :");
    scanf("%d", &number);
    for (int i = 1; i <= number; i += 2)
    {
        for (int j = 1; j <= i; j += 2)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}