#include<stdio.h>
void CharLine(int len,char ch)
{
int i;
for(i=0; i<len; i++)
  printf("%c",ch);
  printf("\n");
}


int main()
{
int len;
char ch;
printf("enter length of border:\n");
scanf("%d",&len);
getchar();
printf("enter character:\n");
scanf("%c",&ch);

CharLine(len,ch);
printf("Date Type \t\t\ size\n");
CharLine(len,ch);
printf("integer \t\t\ 4\n");
CharLine(len,ch);
printf("Character \t\t   1\n");
CharLine(len,ch);
return 0;
}


