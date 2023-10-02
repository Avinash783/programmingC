#include<stdio.h>
#include<stdlib.h>
// malloc,calloc,realloc,free
int main()
{
int *p,n,i;

printf("How many integers: \n");
scanf("%d",&n);

printf("enter integers: \n");
p=(int*)malloc(sizeof(int)*n);

for(i=0; i<n; i++)
 scanf("%d",&p[i]);
 
 for(i=0; i<n; i++)
 printf(" %d ", p[i]);
 
 free(p);          //to avoid the memory leakage
 p=NULL;           //to avoid the dangling pointer
 
//////////

printf("\n ");

return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ gcc mallocfunction.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
How many integers: 
5
enter integers: 
1
2
3
4
5
 1  2  3  4  5 
*/
