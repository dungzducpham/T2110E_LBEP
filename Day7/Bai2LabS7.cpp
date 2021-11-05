#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n:");
	scanf("%d",&n);
	int array[n];
	
	for(int i=0;i<n; i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&array[i]);
		
		for(int j=0;j<i;j++){
			if( array[i] == array[j]){
				for(;array[i] == array[j];){
				printf("Nhap lai so thu %d: ",i);
				scanf("%d",&array[i]);	
			}
		}
		}
		}
	}
	

