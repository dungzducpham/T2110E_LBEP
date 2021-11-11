#include <stdio.h>
#include <string.h>
int main(){
	char str[50];
	int arr[10] = {65,97,69,101,73,105,79,111,85,117};
	printf("Nhap chuoi : ");
	scanf("%s",str); // Chi co array char moi duoc bo dau &
	printf("Chuoi vua nhap la %s \n",str);
	int count = 0;
	for(int i =0;i<strlen(str);i++){
		for (int j =0;j<10;j++){
			if(str[i] == arr[j]){
				count++;
			}
		}		
	}
	printf("So luong nguyen am trong chuoi la: %d\n",count);
	printf("So luong cac ky tu khac la: %d\n",strlen(str)-count);
	}	
