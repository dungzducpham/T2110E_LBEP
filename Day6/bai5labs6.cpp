#include <stdio.h>
int main(){
	int n,a;
	printf("Nhap so n:");
	scanf("%d",&n);
	int array[n];
	
	for(int i=1;i<=n;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&array[i]);
	}
	int m = 0;
	for(int i=1;i<=n;i++){
		if(array[i]>0){
			m = array[i];
			break;
		}
		}if(m == 0){
		printf("Khong co so duong trong mang");
	}

	for(int i=1;i<=n;i++){
		if(array[i]>0 && array[i]<m){
			m = array[i];
		}
	}if(m>0){
	printf("So duong nho nhat la %d ",m);
	}
}

