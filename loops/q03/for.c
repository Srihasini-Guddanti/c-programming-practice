// A C program to print all even numbers between 1 and n using for loop.
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i = 2;i <= n; i += 2)
        {
            printf("%d\n",i);
        }
  return 0;
}
