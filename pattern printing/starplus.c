#include <stdio.h>
int main()
{
    int n;
    printf("Enter an ODD number -->");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    { // use coordinate system using i&j...
      // isse pta chalega ki kaha pe * or " " print karna hai..
        for (int j = 1; j <= n; j++)
        {
            if (i == (n + 1) / 2 || j == (n + 1) / 2)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}