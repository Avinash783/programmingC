#include<stdio.h>
void FindMaxMin(int arr[],int n)
{
int max,min,i;
max=arr[0];
for(i=1; i<n; i++)
{
if(arr[i]>max)
max=arr[i];
}
printf("max=%d\n",max);

}
void MultiplyByFive(int *arr, int n)
{
int temp[100], i;

for(i=0; i<n; i++)
  temp[i]=5*arr[i];
  
for(i=0; i<n; i++)
printf("%d",temp[i]);
}
int main()
{
int arr[100],n,i;
printf("how many elements:\n");
scanf("%d",&n);
printf("enter n integer:\n");

for(i=0; i<n; i++)

 scanf("%d",&arr[i]);
 FindMaxMin(arr,n);
 MultiplyByFive(arr,n);
 printf("/n");
 return 0;
 }
 
 /*
 OUTPUT:  hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ gcc multimax.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
how many elements:
5
enter n integer:
3
4
5
6
7
max=7
1520253035

*/
