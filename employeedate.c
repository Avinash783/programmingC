#include<stdio.h>
int main()
{
//Declearation of Variable
int bs;
float hra,da,pf,gs,ns;
printf("Enter basic salary:\n");
scanf("%d",&bs);
//logic
hra=0.15f*bs;
da=0.03f*bs;
gs=bs+hra+da;
pf=0.125*gs;
ns=gs-pf;
printf("gross salary=%f \nNet salary=%f \n",gs,ns);
return 0;
}
/*
OUTPUT: 
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ gcc employeedate.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
Enter basic salary:
100000
gross salary=118000.000000 
Net salary=103250.000000 
*/

