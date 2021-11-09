#include <stdio.h>
#define SIZE 100

void reverse (const char* const ptr)
{
    if(ptr[0]=='\0')
        return;
    reverse(&ptr[1]);
    putchar(ptr[0]);

}
int main()
{
    char string[SIZE];
    puts("Enter a string");
    fgets( string, SIZE, stdin );
    puts("\nReverse of entered string is");
    reverse(string);
}
