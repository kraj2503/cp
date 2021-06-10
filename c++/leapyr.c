#include<stdio.h>
int leap(int y)
{
    int res;
    if(y%400==0){res=1;}
    else if((y%4==0)&&(y%100!=0)){res=1;}
    else
    {
        res=0;
    }
    return res;
}
int main(){

    int year,result;
    scanf("%d",&year);
    result=leap(year);
    if(result==1){printf("Leap Year");}
    else printf("Not a Leap Year");

return 0;}