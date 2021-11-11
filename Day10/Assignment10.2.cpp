#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("Nhap tong so chuoi ky tu: ");
	scanf("%d",&n);
	
	char str[n][50];
	for(int i=0;i<n;i++){
		printf("Nhap chuoi thu %d cua mang : ",i);
		scanf("%s",str[i]);	
	}
	
	for(int i=0;i<n;i++){
		printf("cac chuoi gia tri cua mang sau khi nhap la : %s\n",str[i]);	
	}
		
	for(int i=0;i<n;i++){
		char temp[50];
		for(int j = 0; j<i; j++)
		if(strcmp(str[j],str[i]) > 0){
			strcpy(temp,str[i]);
			strcpy(str[i],str[j]);
			strcpy(str[j],temp);	
		}
	}
	
	for(int i=0;i<n;i++){
		printf("cac chuoi gia tri cua mang sau khi sap xep la  : %s\n",str[i]);	
	}		
}	
