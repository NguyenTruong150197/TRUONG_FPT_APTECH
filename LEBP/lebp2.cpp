#include <stdio.h>
int main(){
int i, n=10, a[n];
for(i=0;i<n;++i){
	printf("Number %d: ", i + 1);
	scanf("%d",&a[i]) ;
	}
 

for(i=n-1;i>=0;--i){
	printf("%d, ", a[i]) ;
	}
}
