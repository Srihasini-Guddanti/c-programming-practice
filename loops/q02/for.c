// A C program to read a number n and print numbers from n down to 1 using for loop.
#include <stdio.h>
int main()
{
  int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
  for ( ;n >= 1; n--)
      {
          printf("%d\n",n);
      }
 return 0;
}
