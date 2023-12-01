#include<stdio.h>
 
main(){
    /*Q.4 Write a Program to print the below pattern using nested for loop.
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5*/
int i,j;
for(i=1;i<=5;i++){
   for(j=5;j>=i;j--){
   printf("%d",i);
}
 printf("\n");
}
}
