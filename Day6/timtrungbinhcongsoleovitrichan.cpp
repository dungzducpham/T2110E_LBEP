#include <stdio.h>
int main(){
	int n,Sum,count;
	printf("Nhap so n:");
	scanf("%d",&n);
	int array[n];

	count = 0;
	Sum = 0;
	for(int i=1;i<=n;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&array[i]);
	}
	for(int i=1; i<=n;i++){
		if(array[i]%2!=0 && i%2==0){
			Sum = Sum + array[i];
			count++;
		}
	}
	float TBC = (float)Sum/count;
	if(count ==0){
		printf("o cac vi tri le khong co so le");
	}else{
	printf("Trung binh cong cua cac so le trong mang la %f",TBC);
}
}
