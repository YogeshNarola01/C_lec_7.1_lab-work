#include<stdio.h>
 
main(){
    /*Q.8 Write a Program to print the below pattern using nested for loop.
1
2   3
4   5  6
7   8  9  10
11 12 13 14 15 */
int i,j;
int k=1;
for(i=1;i<=5;i++){
   for(j=i;j>=1;j--){
   printf("%d",k);
   k++;
}
 printf("\n");
}
}
