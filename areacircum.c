#include<stdio.h>
void areacircum(int redius, float*parea,float*pperi()
{
*parea=3.142*raduis*radius;
*pperi=2*3.142*radius;
}
//definition of areaperi function
int main()
{
int choice,redius,len,brd;
float area,peri;

printf("1. circle\n2 rectangle\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
    printf("enter radius\n");
    scanf("%d",&radius);
    AreaCircum(radius,&area,&peri);
    printf("Area of Circle is %f and circumference of circle is %f\n",area,peri);
    break;
case 2:
    //code here to scan len and brd
    scanf("%d%d",&len &brd);
    
    areaperi(len,brd,&area,&peri);
    
    printf("Area and Peri\n",areaperi);
    break;
    
    
    

