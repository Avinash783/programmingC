#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch;
printf("Enter charter:\n");
scanf("%c",&ch);
if(ch>=65 && ch<=90)
{
ch=ch+32;
}
else if(ch>=97 && ch<=122)
{
ch=ch-32;
}
else
{
printf("not an alphabet\n");
exit (0);
}
printf("opposite case alphabet -%c\n",ch);
return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ gcc assig11.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
Enter charter:
b
opposite case alphabet -B
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ 
*/

