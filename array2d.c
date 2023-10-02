#include<stdio.h>

void Accept(int arr[][3])
{
}
void Display(int (*arr)[3])
{
}

int main()
{
int arr[3][3],i,j;
//accept(arr);
//display(arr);

printf("enter elements of array :\n");

for (i=0; i<3; i++)
{
for (j=0; j<3; j++)
{
scanf("%d",*(arr+i)+j);
}
}
for(i=0; i<3; i++)
{
for(j=0; j<3; j++)
{
printf("%d",*(*(arr+i)+j));
}
printf("\n");
}
printf("\n");

return 0;
}

/*
OUTPUT:

hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ gcc  array2d.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
enter elements of array :
6
3
4
5
6
7
8
8
9
634
567
*/
