#include<stdio.h>

main(){
	
	int i,j;
	char k='A';
	int n = 1;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
		   if(i%2==0){
		   	if(j%2==0){
		   		printf("%d",n++);
			   }else{
			   	printf("%c",k++);
			   }
		   }else{
		   	if(j%2!=0){
		   		printf("%d",n++);
			   }else{
			   	printf("%c",k++);
			   }
		   }
		}
		printf("\n");
	}
}
