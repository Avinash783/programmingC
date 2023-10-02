#include<stdio.h>

int main()
{
//Declear variable

int bs,ts;
float comm=0,ns;

printf("enter  basic salary and total sales amount:\n");
scanf("%d%d",&bs,&ts);

// logic

if(ts>=5000 && ts<=7500)
{
comm=0.03f*ts;
}
else if(ts>=7501 && ts<=10500)
{
comm=0.08f*ts;
}
else if(ts>=10501 && ts<=15000)
{
comm=0.11f*ts;
}
else if(ts>15000)
{
comm=0.15f*ts;
}
ns=bs+comm;

printf("Net salary=%f\n",ns);

return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ gcc netsalary.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
enter  basic salary and total sales amount:
100000
120000
Net salary=118000.000000
*/
