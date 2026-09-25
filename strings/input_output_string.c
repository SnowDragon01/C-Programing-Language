// we will use puts and gets to take input and give output a string>>

#include <stdio.h>
#include <string.h>
int main()
{
    char string[200];
    puts("Enter your sentence:"); // jo bhi "" iske andar hai usko print karta hai>>

    // gets(string);

    // scanf("%s",string);  // scanf se input me space dete hi pura first word chorke sab 
    //terminate ho jata hai>>
    // to cater sanf problem of using space we will use >>

    scanf("%[^\n]s",string); //[^\n] use karenge %s ke pehle>>

    puts("You entered:");

    printf("%s", string);
    return 0;
}