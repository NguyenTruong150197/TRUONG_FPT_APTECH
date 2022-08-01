#include <stdio.h>
int main(){
	int ary[10];
    int i, total, high;
    printf("Moi nhap gia tri phan tu mang: ");
    for(i=0; i<10; i++){
		scanf("%d", &ary[i]);
    }
    /* Displays highest of the entered values */
    high = ary[0];
    for(i=1; i<10; i++){
        if(ary[i] > high){
			high = ary[i];
		}
	}
	printf("\nHighest value entered was %d", high);
}
