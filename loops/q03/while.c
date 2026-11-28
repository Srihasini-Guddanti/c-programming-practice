// A C program to print all even numbers between 1 and n using while loop.
#include <stdio.h>
int main()
{
    int n, i = 2;
    printf("Enter n:\n");
    scanf("%d",&n);
   while(i <= n)
       {
           printf("%d\n",i);
           i += 2;
       }
    return 0;
}
