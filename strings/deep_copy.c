// #include<stdio.h>

// int main() {
//     char string1[] = "zello everyone!";
//     int size = 0, i = 0;

//     // Size calculate karna
//     while(string1[i] != '\0') {
//         size++;
//         i++;
//     }

//     // Sahi size: size + 1 (null character ke liye)
//     char string2[size + 1]; 

//     // Loop se copy karna
//     for (int j = 0; j < size; j++) {
//         string2[j] = string1[j];
//     }
//      // string1 me change kiya
//     string1[0] = 'F';
//     // String ko band karna zaroori hai
//     string2[size] = '\0'; 

//     // Ab dono alag print honge
//     printf("string2: %s\n", string2); 
//     printf("string1: %s\n", string1);

//     return 0;
// }

// listen we can also use strcpy() function to deep copy ...
#include<stdio.h>
#include<string.h>
int main()
{
char string1[16] = "zello everyone!";
char string2[16];
strcpy( string2,string1);
string1[0]='D';
printf("%s\n",string1);  // Dello everyone!
printf("%s",string2);  // zello everyone!
return 0;
}
