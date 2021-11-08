#include <stdio.h>
int main(){
	int n,x;
	printf("Nhap so n:");
	scanf("%d",&n);
	int array[n];

	for(int i=1;i<=n;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&array[i]);
	}
	printf("Nhap so x:");
	scanf("%d",&x);
	int a;
	for(int i=1;i<=n;i++){
		a = array[i];
		if(array[i]==x){
		printf("x co trong mang");
		break;
		}
		}if(a!=x){
		printf("x ko co trong mang");	
		}
		}
		

