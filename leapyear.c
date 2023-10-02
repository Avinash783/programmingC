#include<stdio.h>

int main()
{
//variable declearation
int year;

printf("enter year:\n");
scanf("%d",&year);

//logic
if (year%4==0 && year%100!=0 || year%400==0)

printf("leap year");

else

printf("not leap year");

return 0;
}

/*
OUTPUT: 
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ gcc leapyear.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
enter year:
2022
not leap yearhpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
enter year:
2016
leap yearhpcsap@hpcsap-DIT400TR-55L:~/Desktop$ 
*/
