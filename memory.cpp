#include<iostream>
using namespace std;
int main()
{
int i;
int *p=(int*)calloc(5,sizeof(int));

cout<<"enter five integer"<<endl;
for (i=0; i<5; i++)
cin>>p[i];

p=(int*)realloc(p,sizeof(int)*7);
cout<<"enter two more integers"<<endl;
for(i=5; i<7; i++)
cin>>p[i];

for(i=0; i<7; i++)
cout<<p[i]<<" ";
free(p);
cout<<endl;
return 0;
}
/*
OUTPUT;
  hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ g++ memory.cpp
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ ./a.out
enter five integer
1
2
3
4
5
enter two more integers
6
7
1 2 3 4 5 6 7 
hpcsap@hpcsap-DIT400TR-55L:~/Desktop$ 

*/
