#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n:");
	scanf("%d",&n);
	int array[n];
	int flag =0;
	for(int i=0;i<n; ){
		flag =0;
		printf("Nhap so thu %d: ",i);
		scanf("%d",&array[i]);
		// kiem tra so nguyen to
		int count=0;
		for(int k = 2;k<array[i]/2;k++){
			if(array[i]%k==0 || array[i] == 0 || array[i] == 1){
				flag = 1;
				break;
			}
		}
		for(int j=0;j<i;j++){
			if( array[i] == array[j]){
			flag = 1;
			break;
			}
		}
		}
		if(flag==0){
			i++;
		}
		}
	}
	

