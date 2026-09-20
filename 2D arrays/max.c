#include <stdio.h>
#include <limits.h>
int main()
{
    int max = INT_MIN;
    int array[3][3] = {3, 7, 9, 5, 0, 1, 99, 34, 22};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max < array[i][j])
            {
                max = array[i][j];
            }
        }
    }
    printf("The max no. in the array is %d ", max);
    return 0;
}