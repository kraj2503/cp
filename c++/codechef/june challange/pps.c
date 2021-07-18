#include<stdio.h>
#include<string.h>
int main(){

char str[]="computer_science_engennering";
char *token = strtok(str,"_");
while(token!=NULL)
{
    printf("%s\t",token);
    token = strtok(NULL,"_");

}   

return 0;}