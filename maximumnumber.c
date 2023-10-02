#include<stdio.h>
int main()
{
//Declear Variable
int a,b,c;
int max;

printf("enter three integer\n");
scanf("%d%d%d",&a,&b,&c);

//logic

max=(a>b)?(a>c)?a:b:(b>c)?b:c;
printf("max=%d\n",max);

return 0;
}

/*enter three integer
OUTPUT
78
90
67
max=90 */

