#include <stdio.h>
int main(){
	int a,b,n;
	printf("Nhap so a: ");
	scanf("%d",&a);
	
	printf("Nhap so b: ");
	scanf("%d",&b);	 

	for(;a>=b || a<0 || b<0; ){
		printf("a hoac b khong thoa man dieu kien \n");
		
		printf("Nhap lai so a: ");
		scanf("%d",&a);
	
		printf("Nhap lai so b: ");
		scanf("%d",&b);	
	}
	printf("Cac so nguyen to nho hon %d va lon hon %d la: ",b,a);
		for(int i=a;i>=a && i<=b;i++){
			for(n=2;n<=b;n++){
				if(i%n==0 && i!=n){
					break;
				}
			}if(i==1){
				continue;
			}
			if(i%n!=0){ 
			printf("%d  ", i);
			}
		}	
		}
