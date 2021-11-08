#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n:");
	scanf("%d",&n);
	int array[n];
	
	for(int i=1;i<=n;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&array[i]);
	}
	int c = 0, b = 0;
	for(int i=1;i<=n;i++){
		if(array[i]>0){
			c++;
		}else if(array[i]<=0){
			c=0;
		}
		if(c>b){
			b=c;
		}	
	}
		printf("%d",b);
}

