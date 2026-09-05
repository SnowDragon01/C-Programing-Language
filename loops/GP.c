// print gp 2,4,8,16...upto n terms take input n from user ..
#include <stdio.h>
int main()
{
    int n, newvar = 1;
    printf("Enter n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        newvar = newvar * 2;
        printf("%d ", newvar);
    }

    return 0;
}

// #include<stdio.h>
// #include<math.h>
// int main()
// {
// int n;
// printf("Enter n:");
//     scanf("%d",&n);
//     for (int i = 2; i <=2*pow(2,(n-1)); i*=2)
//     {
//        printf("%d ",i);
//     }

// return 0;
// }