#include<stdio.h>
int main()
{
int arr[3][3]={1,2,3,4,5,6,7,8,9};

printf("%u\n",arr);
printf("%u\n",&arr);
printf("%u\n",*arr);
printf("%u\n",**arr);

printf("%u\n",arr+1);
printf("%u\n",&arr+1);
printf("%u\n",*arr+1);
printf("%u\n",**arr+1);

printf("%d\n",arr[1][2]);
printf("%d\n",*(*(arr+1)+2));

return 0;
}

/*
OUTPUT:
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
1490685408
1490685408
1490685408
1
1490685420
1490685444
1490685412
2
6
6
*/
