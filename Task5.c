#include <stdio.h>
#include<string.h>
#define SIZE 100
void reverse(char s[], int size)
{
    char temp;
    for(int i=0; i<size/2; ++i)
    {
        temp=s[i];
        s[i]=s[size-i-1];
        s[size-i-1]= temp;
    }
}
int main()
{
    char s[SIZE];
    puts("Enter a string:");
    fgets( s, SIZE, stdin );
    reverse(s,strlen(s));
    puts("\nReverse of entered string is");
    printf("%s\n",s);

}
