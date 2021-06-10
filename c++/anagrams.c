#include<stdio.h>
#include<string.h>
int main()
{ int ctr=0,x1,x2,ctr1=0;
  char ch1[15],ch2[15],ch;
  printf("Enter 1st String :\t");
  scanf("%[^\n]",ch1);
  // printf("%s\n",ch1);
  printf("Enter 2nd String :\t");
  scanf("%c\n",&ch);
  scanf("%[^\n]",ch2);
  x1=strlen(ch1); x2=strlen(ch2);
  if(x1!=x2)
  { printf("They aren't Anagrams !"); return 0; }
        for(int i=0;ch1[i]!='\0';i++)
        {
          for(int j=i+1;ch1[j]!='\0';j++)
          if(ch1[i]==ch1[j]) ctr1++;
        }
  for(int i=0;ch1[i]!='\0';i++)
  {
    for(int j=0;ch2[j]!='\0';j++)
    {
       if(ch1[i]==ch2[j] || ch1[i]==(ch2[j]-32) || ch1[i]==ch2[j]+32)
       ctr++;
    }
  }
  if(ctr-2*ctr1==x1)
  printf("We got Anagrams !");
  else
  printf("They aren't Anagrams !");
  return 0;
}