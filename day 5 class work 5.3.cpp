#include<stdio.h>
int main(){
int sum=0,avg ,i,j,row=2,col=2;
int matrix[2][2]={{1,2},{2,3}};
for(i=0;i<row;i++){
for (j=0;i<col;j++){
sum=sum+matrix[i][j];
avg=sum/4;
}
}
printf("the sum is %d",sum);
printf("/nthe average is %d",avg);
return 0;
}
