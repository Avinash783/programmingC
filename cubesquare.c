//*- Write a program to accept a number from user and print it’s square & cube in C language 
 #include<stdio.h>
int main ()
{
//Declear Variable
int n,square,cube;

printf("Enter a number");
scanf("%d",&n);

//logic

square=n*n;
cube=n*n*n;

printf("square of given number=%d\n",square);
printf("cube of given number=%d\n",cube);
return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ gcc cubesquare.c
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
Enter a number4
square of given number=16
cube of given number=64
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ 

*/
