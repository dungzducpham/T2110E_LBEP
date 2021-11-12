#include <stdio.h>
int main(){
	int n,j;
	printf("Xin moi nhap n: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Xin moi nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	for(j=n-1;j>=0;j--){
		if(arr[j]%2 == 0){
			printf("So chan cuoi cung cua mang la: %d",arr[j]);
			break;
		}
	}
	if(j<0){
		printf("Mang ko co so chan");
	}
}
