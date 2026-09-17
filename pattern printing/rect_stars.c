#include <stdio.h>
int main()
{
    int length, breadth;
    printf("Enter lenght :");
    scanf("%d", &length);
    printf("Enter breadth :");
    scanf("%d",&breadth);
    for (int i = 1; i <=breadth; i++)
    {
        for (int j = 1; j <=length; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
