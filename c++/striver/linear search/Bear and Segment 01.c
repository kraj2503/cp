#include <stdio.h>
#include<string.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char s[100000];
	    scanf("%s",s);
	    long int count=0,count1=0;
	    long int b[2]={0};
	    for(int i=0;s[i]!='\0';i++)
	    {
	        int d=s[i]-'0';
	        b[d]++;
	    }
	    for(int i=0;s[i]!='\0';i++)
	    {
	        if(s[i]=='1')
	        {
	            count++;
	            if(s[i+1]=='0')
    	        {
    	            break;
    	        }
	        }
	    }
	    long int length=strlen(s);
	    if(b[1]==count&&b[0]!=length)
	    {
	        printf("YES\n");
	    }
	    else if(b[0]==length)
	    {
	        printf("NO\n");
	    }
	    else
	    printf("NO\n");
	}
	return 0;
}
