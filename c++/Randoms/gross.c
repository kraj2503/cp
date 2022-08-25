#include<stdio.h>
int main(){

    int gross,basic,da,hra;
    scanf("%d %d %d",&basic,&da,&hra);
    da=(basic*da)/100;
    hra=(basic*hra)/100;
    gross=basic+da+hra;
    printf("%d",gross);

return 0;}