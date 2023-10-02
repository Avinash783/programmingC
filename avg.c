#include<stdio.h>

int main()
{
//Declearation of Function

int m1,m2,m3,m4,m5;

float avg;

printf("enter number :\n");

scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

//logic

// avg=(m1+m2+m3+m4+m5)/5; //explicit typeconversion

avg=(m1+m2+m3+m4+m5)/5.0;  //implicit typeconversion

printf("avarage of number of number=%f\n",avg);

return 0;
}
/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ gcc avg.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
enter number :
60
70
80
90
100
avarage of number of number=80.000000


