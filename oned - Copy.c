#include<stdio.h>
int main()
{
int arr[5]={};

for(int i=0; i<5; i++)
{
printf("enter array[%d]=%d\n",i,arr[i]);
}
return 0;
}

/* 
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ gcc oned.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
enter array[0]=0
enter array[1]=0
enter array[2]=0
enter array[3]=0
*/
