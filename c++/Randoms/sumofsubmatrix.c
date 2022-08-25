#include <stdio.h>
int main()
{
   
  int t;
   
  scanf("%d",&t);
  while(t--){
   
   int m,n,x1,y1,x2,y2,sum=0;
    scanf("%d %d",&m,&n);
    int C[m][n];
     int i,j,k,l;
    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
      scanf("%d",&C[i][j]);   
      }}
      scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    for(k=x1-1;k<x2;k++){
      for(l=y1-1;l<y2;l++){
       
       sum=sum+C[k][l]; 
   
      }
    }
printf("%d\n",sum); 
}

  return 0;
}