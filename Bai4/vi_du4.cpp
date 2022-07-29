#include <stdio.h>
int main(){
	int y = 0;
	int tk = 4000;
	while(tk < 1000000){
		int ls = tk*8/100;
		tk += ls;
		y++;
	}
	printf("y = %d", y);
}
