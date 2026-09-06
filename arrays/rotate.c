#include <stdio.h>
void rotate(int array[], int si, int ei)
{
  int temp;
  for (int i = si, j = ei; i < j; i++, j--)
  {
    temp = array[i];
    array[i] = array[j];
    array[j] = temp;
  }
  return;
}
int main()
{
  int n, k;

  printf("Enter size of the array:");
  scanf("%d", &n);

  int array[n];

  printf("Enter the number by which array is to be rotated:");
  scanf("%d", &k);

  for (int i = 0; i < n; i++)
  {
    printf("Enter the number at index %d :", i);
    scanf("%d", &array[i]);
  }

  // int array[9]={1,2,3,4,5,6,7,8,9};
  // step 1:rotate compelete array
  rotate(array, 0, n - 1);
  // step 2:rotate: 0-(k-1)
  rotate(array, 0, k - 1);
  // step 3:rotate: k-(n-1)
  rotate(array, k, n - 1);
  for (int i = 0; i < n; i++)
  {
    printf("%d ", array[i]);
  }

  return 0;
}