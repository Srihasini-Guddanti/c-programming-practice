// A C program to read a number n and print numbers from n down to 1 using while loop.
#include <stdio.h>
int main()
{
  int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
   while (n >= 1)
       {
           printf("%d\n",n);
           n--;
       }
 return 0;
}
