#include<stdio.h>
int*Max(int*px, int*py)
{
if(*px>*py)
return px;
else if(*py>*px)
return py;
else
return NULL;
}

int main()
{
int a,b;
printf("enter two number:\n");
scanf("%d%d",&a,&b);
int *p=Max(&a,&b);
printf("address of max is %u and value of max is %d \n",*p);
return 0;
}
/*

OUTPUT:

hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
enter two number:
70      
56
address of max is 70 and value of max is 70 
*/



