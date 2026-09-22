#include <stdio.h>
int main()
{
    int n;
    printf("Enter an ODD number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {   // inverted equilateral triangle >>
            if(i==j || i<j)
            {
                printf("* ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}