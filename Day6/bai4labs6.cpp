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
	
	for(int i=1;i<=n;i++){
		if(array[i]%2!=0){
			a = array[i];
		}
	}if(a%2==0){
		printf("Mang ko co so le");
	}else{
		printf("So le cuoi cung la %d",a);
	}
		
	}
