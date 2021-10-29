#include <stdio.h>
int main(){
	int i,n;
	float s;
	printf("Nhap so n: ");
	scanf("%d",&n);
	s = 0;
	i = 1;
	while(n<=0){
		printf("Yeu cau n > 0 moi nhap lai \n");
			printf("Nhap so n: ");
				scanf("%d",&n);
	}
	while(i <= n){
		s = s+(float)1/i;
			i++;
	}
	printf("Tong S = %f",s);
}
