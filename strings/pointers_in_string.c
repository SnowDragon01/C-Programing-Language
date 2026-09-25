#include<stdio.h>
#include<string.h>
int main()
{
char string[]="Hello This is Harsh's String!";
// puri string pointer dabbe me dalne ke liya '&' ka use nahi karte..

// char* ptr=string;   //ptr name ke pointer dabbe me puri sting dal dii..

// main directly string ko bhi store karwa sakta hoon ptr wale dabbe me ..

char* ptr="Hello This is Harsh's String!"; // same function different representation..

// jab koi particular letter ko pointer me put karte hain tab '&' ki zarurat hoti hai..

int i=0;
// *ptr use karke value fetch kii..
while (*ptr!='\0')
{   // fetchin ke bad value print kiya..
    printf("%c",*ptr);
    i++;
    ptr++; // ptr name ke dabbe ke position ko ++ kiya..
}
return 0;
}