#include<stdio.h>

int fact(int n)
{
int f=1;
while(n>0)
{
f=f*n;
n--;
}
return f;
}
float power(float base, int index)
{
int i;
float p=1.0;
for(i=0; i<index; i++)
{
p=p*base;
}
return p;
}
int main()
{
int angle;
float x,result;
printf("enter angle in degree\n");
scanf("%d",&angle);

//logic

x=(3.142f/180)*angle;
result=x-(power(x,3)/fact(3))+(power(x,5)/fact(5))-(power(x,7)/fact(7))+(power(x,9)/fact(9));

printf("sine value is %f\n",result);
return 0;
}

/*
OUTPUT:

hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ gcc anglecalculating.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
enter angle in degree
180
sine value is 0.006528
*/
