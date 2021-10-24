#include <stdio.h>
#include <math.h>
int main(){
	// Nhap tien goc
	// Nhap lai suat
	// Nhap so nam gui tien trong ngan hang
	float a,b,c;
	printf("Nhap so tien goc: ");
	scanf("%f",&a);
	printf("Nhap ty le lai suat: ");
	scanf("%f",&b);
	printf("Nhap so nam gui tien trong ngan hang: ");
	scanf("%f",&c);
	if(a*b*c>0){
		a = a*pow((1+b/100),c);
		printf("Tong so tien thu duoc la %f",a);
	}else{
		printf("So tien goc lai suat va so nam phai lon hon 0");
	}
}

