#include<stdio.h>
 
main(){
    /*Q.10 Write a Program to print the below pattern using nested for loop.
A
B C
D E F
G H I J
K L M N O */
char i,j;
char k='A';
for(i=1;i<=5;i++){
   for(j=i;j>=1;j--){
   printf("%c",k);
   k++;
}
 printf("\n");
}
}
