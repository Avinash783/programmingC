#include<stdio.h>
#include<stdlib.h>
struct laptop
{
int srno; 
char make[20];
double cost;
}lappy;
int main()
{
typedef int abc;
abc a=10;
printf("%d \n",a);
lappy l1={101,"lenovo",45000},l2;
lappy l3, *lptr;

printf("%d %s %lf\n",l1.srno, l1.make, l1.cost);

printf("Enter laptop details(id,make,cost)\n");
scanf("%d %s %lf",&l2.srno,&l2.make,&l2.cost);
printf("%d %s %lf\n",l2.srno, l2.make, l2.cost);

lptr=(struct Laptop*)malloc(sizeof(struct Laptop*));
printf(" enter laptops details(id,make,cost)\n");
scanf("%d %s %lf\n",&lptr->srno, &lptr->make, &lptr->cost);
printf("%d %s %lf\n", lptr->srno, lptr->make, lptr->cost);
return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
101 lenovo 45000.000000
Enter laptop details(id,make,cost)
234
dell
70000
234 dell 70000.000000
*/


