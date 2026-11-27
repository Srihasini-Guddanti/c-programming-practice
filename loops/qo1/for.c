// A C program to print all natural numbers from 1 to n using for loop.
#include <stdio.h>
int main()
{
  int i,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
        {
            printf("%d\n",i);
        }
 return 0;
}
