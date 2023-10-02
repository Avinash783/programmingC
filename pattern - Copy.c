#include<stdio.h>
int main()
{
//declear Variables
int i,j;
//logic
for (i=0; i<=5; i++)
{
  for(j=1; j<=5-i+1; j++)
  {
    printf("%d",j);
  }
  
 for(j=1; j<2*i-1; j++)
 {
 printf(" ");
 }
 printf("\b");
 
 for(j=5-i+1; j>=1; j--)
 {
 printf("%d",j);
 }
 printf("\n");
 }
 printf("\n");
 return 0;
 }
 
  /*
  OUTPUT:
  hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ gcc pattern.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
12345654321
123454321
1234 4321
123   321
12     21
1       1

*/
