#include<stdio.h>
int main()
{
int len,brd,i,j;
char ch;
printf("enter lenght and breadth of a reactangle\n");
scanf("%d%d",&len,&brd);
getchar();

printf("enter character\n");
scanf("%c",&ch);
for(i=0; i<len; i++)
{
  printf("%c",ch);
}
printf("\n");
for(i=0; i<brd-2; i++)
{
 printf("%c",ch);
 for(j=0; j<len-2; j++)
 {
 printf(" ");
 }
 printf("%c\n",ch);
 }
 for(i=0; i<len; i++)
 {
 printf("%c",ch);
 }
 printf("\n");
 return 0;
 }
 
 /*
 hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
enter lenght and breadth of a reactangle
20
6
enter character
*
********************
*                  *
*                  *
*                  *
*                  *
********************
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ 
*/
 
 


