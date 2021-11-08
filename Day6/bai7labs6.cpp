#include <stdio.h>
int main(){
	int n,s;
	printf("Nhap so n:");
	scanf("%d",&n);
	int array[n];
	
	for(int i=1; i<=n; i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&array[i]);
	}
	
	int maxs = 0;
	for(int i=1; i<=n; i++){
		if(array[i] > 0){
			s = s + array[i];
		}else if(array[i] <= 0){
			s=0;
	}
		if(s > maxs){
			maxs = s;
		}	
	}printf("%d",maxs);
}

