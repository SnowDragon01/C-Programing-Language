#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    puts("Enter a string:");
    scanf("%[^\n]", string);  //[^\n]: iska matlab hota hai jabtak new line na aaye tabtak string ko input lo
    // puts("The size of the string is:");
    int size = 0;
    while (string[size] != '\0')
    {  
        size++;
    }
    printf("The size of the entered string is %d\n",size);  // '\0' ko bhi add karta hai size me>>
    for (int i = size-1; i >= 0; i--)
    {
        printf("%c",string[i]);
    }
    return 0;
}