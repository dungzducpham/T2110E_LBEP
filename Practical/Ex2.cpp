#include <stdio.h>
#include "FunctionofEx2.h"
int main(){
	int n;
	printf("Xin moi nhap n: ");
	scanf("%d",&n);
	int s[n];
	
	for(int i=0;i<n;i++){
	printf("Xin moi nhap phan tu thu %d: ",i);
	scanf("%d",&s[i]);
	}
	
	printf(" Average = %f",average(s,n));
}
