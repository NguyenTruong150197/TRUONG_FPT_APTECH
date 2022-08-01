#include <stdio.h>
int main(){
	for(int i = 1;i <= 5;i++){
		for(int j = 1;j <= 4;j++){
			printf("* ");
		}
		if(i % 2 == 0){
			printf("\n");
		}
		else{
			printf("*\n");
		}
	}
}
