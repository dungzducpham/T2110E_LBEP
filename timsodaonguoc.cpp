#include <stdio.h>
int main(){
	// input a
	int a,b;
			printf("Nhap so a = ");
			scanf("%d",&a);
	if(a<10000){
		if(a>0){
			b = 0;
			b = b*10 + a%10;
			a = a/10;
			if(a!=0){
				b = b*10 +a%10;
				a = a/10;
					if(a!=0){
					b = b*10 +a%10;
					a = a/10;
						if(a!=0){
						b = b*10 +a%10;
						a = a/10;
						printf("So dao nguoc cua a la: %d",b);
						}else{
						printf("So dao nguoc cua a la: %d",b);
						}
					}else{
					printf("So dao nguoc cua a la: %d",b);
					}
				}else{
				printf("So dao nguoc cua a la: %d",b);
				}
			}else{
			// nhap sai dieu kien a
			printf("so a phai lon hon 0 va toi da 4 chu so");
			}
		}else{
		// nhap sai dieu kien a
		printf("so a phai lon hon 0 va toi da 4 chu so");
		}
}
