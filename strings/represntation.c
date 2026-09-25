#include <stdio.h>
#include<string.h>
int main()
{   // \0 is self understood in the string >>
    // if its placed or not it doesnt matter>>
    // char string[]={'H','e','l','l','o','\0'};  // not a good method >>
    char string[] = "My self Harsh Raj!\0"; // better method>>
    int i=0;
    // loops ke through string print karna>>
    // while (string[i] != '\0')
    // {
    //      printf("%c", string[i]);
    //     i++;
    // }

    // string printing without using loops>>
    printf("%s\n",string);  //'%s' used for string>>
    // also we can #include<stirng.h> and use 'puts'>>
    puts(string);
    return 0;
}
