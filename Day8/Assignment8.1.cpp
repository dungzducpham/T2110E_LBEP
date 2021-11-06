#include <stdio.h>
int main(){
	int n;
	printf("Nhap gia tri n: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap gia tri thu %d cua mang: ",i);
		scanf("%d",&arr[i]);
		for(int j = 0;j<i;j++){
			if(arr[j]>arr[i]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i = 0; i<n;i++){
		printf("%d\t",arr[i]);
}
}

