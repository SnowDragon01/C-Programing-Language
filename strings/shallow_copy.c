#include<stdio.h>
int main()
{
char s1[]="Hello this is Harsh's string";
char* s2=s1;
s1[0]='A';
// here s2 points the same string, so change in s1 also affects s2
// s2 is shallow copy of s1..
printf("%s\n",s1);
printf("%s",s2);
return 0;
}