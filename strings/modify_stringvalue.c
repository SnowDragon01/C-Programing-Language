#include<stdio.h>
int main()
{
char string[]="My self Harsh!";
int i=0;
while (string[i]!='\0')
{       // 's' wala string print karega 
    printf("%c",string[i]);
    i++;
}
printf("\n");
i=0;  // i ki valu ko update kar diya>>

// string[3]='S'; // updation me koi number ko rakhun to wo uski ascii character print karega>>
string[3]=65;  // 'A' ho jayega 's' ki jagh pe>>

while (string[i]!='\0')

{   // 'S' wala print karega >>
    printf("%c",string[i]);
    i++;
}
return 0;
}