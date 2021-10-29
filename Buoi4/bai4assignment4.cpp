#include <stdio.h>
int main(){
	int i1,i2,i3,n,a;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	i1 = 0;
	i2 = 1;
	a = 3;
	while(n<=0){
		printf("Yeu cau n > 0 moi nhap lai \n");
			printf("Nhap so n: ");
				scanf("%d",&n);	}
	if(n==1){
		printf("%d",i1);
	}else if(n==2){
		printf("%d",i2);
	}else{
		while(a<n ){
			i1 = i2;
			i2 = i3;
			i3 = i2 + i1;
			a++;
	}printf("So tai vi tri thu %d trong day Fibonaci la so %d \n",n,i3);
}
}
