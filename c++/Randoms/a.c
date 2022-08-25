#include <stdio.h>
#include<math.h>
int main()
{long int q,start,end;
int i,t;
scanf("%ld",&q);
while(q--){
 long int c=0;
  scanf("%ld %ld",&start,&end);
  for(i=start;i<=end;i++){
    t = sqrt(i);
    c+= ((sqrt(i)==t));
  }
  printf("%ld\n",c);
}
  return 0;
}