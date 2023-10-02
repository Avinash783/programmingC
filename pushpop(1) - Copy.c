#include<stdio.h>
void RemoveElement(int *arr,int *n)
{
int pos,i;
printf("Enter position of Element to be removed:\n");
scanf("%d",&pos);
for(i=pos; i<*n; i++)
{
arr[i]=arr[i+1];
(*n)--;
}
}
void InsertElement(int *arr, int *n)
{
int val,pos,i;
printf("Enter value to be inserted inside in array:\n");
scanf("%d",&val);
printf("enter position of element:\n");
scanf("%d",&pos);
for(i=*n; i>pos; i--)
arr[1]=arr[i-1];
arr[pos]=val;
(*n)++;
}

void printArray(int *arr,int n)
{
int i;
for(i=0; i<n; i++)
printf("%d\n",arr[i]);
printf("\n");
}
int main()
{
int arr[100],n,i;
printf("how many elements:\n");
scanf("%d",&n);
printf("enter array element:\n");
for(i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}
RemoveElement(arr,&n);
printArray(arr, n);
InsertElement(arr,&n);
printArray(arr, n);
return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ gcc pushpop.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
how many elements:
10
enter array element:
1
2
3
4
5
6
7
8
9
10
Enter position of Element to be removed:
5
1
2
3
4
5
7
8

Enter value to be inserted inside in array:
77
enter position of element:
5
1
7
3
4
5
77
8
9
*/
