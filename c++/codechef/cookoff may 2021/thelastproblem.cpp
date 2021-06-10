#include<iostream>
using namespace std;
int main(){
int matrix[1005][1005];
    for(int i = 1;  i <= 1000;  i++)
    {
        matrix[i][1] = i * (i+1)/2;
       
    //     for(int j = 2;  j <= 1000;  j++)
    //     {
    //         matrix[i][j] = matrix[i][j-1] + (j - 1) + (i - 1);
    //     }
    }

return 0;}