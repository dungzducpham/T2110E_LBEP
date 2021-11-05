#include <stdio.h>
int main(){
	int n,x,s;
	printf("Nhap so n:");
	scanf("%d",&n);
	int array[n];
	
	for(int i=1; i<=n; i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&array[i]);
	}
		printf("Nhap so x: ");
		scanf("%d",&x);
	int a = array[1];	
	for(int i=1; i<=n; i++){
		if (array[i]<a){
			a = array[i];
		}
	}
	s = array[1];
		for(int i=1; i<=n; i++){
		if(array[i]<x && array[i]>s){
			s = array[i];
		}
	}
	if(x<=a){
		printf("Mang ko co so tiem can x");
	}else{
		printf("So tiem can x la %d",s);
}
}
