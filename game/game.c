#include<stdio.h>
#include<stdlib.h>
int main(){
	int chances,n,guess,ran,i;
	ran=(rand()%(100-1+1))+1;
	printf("1.Easy\n2.Medium\n3.Hard\n");
	scanf("%d",&n);
	switch(n){
		case 1:
			chances=10;
			break;
		case 2:
			chances=7;
			break;
		case 3:
			chances=5;
			break;
	}
	for(i=0;i<chances;i++){
		printf("\nEnter the number\n:");
		scanf("%d",&guess);
		if(guess==ran){
			printf("\nYou won");
			break;
		}
		if(guess>ran){
			printf("\n The number you enter is greater than magic number");
		}
		if(guess<ran){
			printf("\n The number you enter is smaller than magic number");
	}
}
	if(i==chances)
		printf("\nYou loose \n correct answer is %d",ran);
	return 0;
}
