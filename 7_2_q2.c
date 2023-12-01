#include<stdio.h>
 
main(){
    /*Q.2 Write a Program to print the below pattern using nested for loop.
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5*/
int i,j;
for(i=5;i>=1;i--){
   for(j=i;j<=5;j++){
   printf("%d",j);
}
 printf("\n");
}
}
