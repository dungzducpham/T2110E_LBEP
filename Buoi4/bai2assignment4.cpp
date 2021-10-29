#include <stdio.h>
int main(){
	int i,s,c;
	s = 0;
	i = 0;
	c = 0;
	while(c < 100){
		if(i%2 != 0){
			s = s+i;
			c++;
		}i++;
	}
	printf("Tong 100 so le dau tien la: %d",s);
}
