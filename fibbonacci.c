#include<stdio.h>
void fibonacci(int terms)
{
// variable Declearation
int a=0, b=1;
int c;
while(terms>2)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
terms--;
}
printf(" \n");
}
int main ()
{
int terms;
printf("enter number of terms to be printed of fibonacci series:");
scanf("%d",&terms);

printf("0,1  \n");
fibonacci(terms);
return 0;
}

/* 
OUTPUT:
gcc fibbonacci.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
enter number of terms to be printed of fibonacci series:10
0,1  
12358132134 
*/

