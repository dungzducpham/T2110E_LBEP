#include <stdio.h>
int main(){
		// nhap a va b
	int a,b;
	printf("Nhap so a ");
	scanf("%d",&a);
	printf("Nhap so b ");
	scanf("%d",&b);
		int m = 0;
		m = m+ b;
		if(b<=31 && b >= 1){
		if(a==1){
			printf("so thu tu trong nam cua b la: %d \n",m);
			if(m%7 == 0){
				printf(" Ngay b la chu nhat");
			}else{printf("Ngay b la thu %d",m%7+1);
			}			
		}else if(a==2 && b <=28 ){
			m = m + 31;
			printf("so thu tu trong nam cua b la: %d \n",m);
			if(m%7 == 0){
				printf(" Ngay b la chu nhat");
			}else{printf("Ngay b la thu %d",m%7+1);
			}			
		}else if(a==3){
			m = m+31+28;
			printf("so thu tu trong nam cua b la: %d \n",m);
			if(m%7 == 0){
				printf(" Ngay b la chu nhat");
			}else{printf("Ngay b la thu %d",m%7+1);
			}			
		}else if(a==4 && b<=30){
			m = m+31+28+31;
			printf("so thu tu trong nam cua b la: %d \n",m);
			if(m%7 == 0){
				printf(" Ngay b la chu nhat");
			}else{printf("Ngay b la thu %d",m%7+1);
			}		
		}else if(a==5){
			m = m+31+28+31+30;
			printf("so thu tu trong nam cua b la: %d \n",m);
			if(m%7 == 0){
				printf(" Ngay b la chu nhat");
			}else{printf("Ngay b la thu %d",m%7+1);
			}						
		}else if(a==6 && b<=30){
			m = m+31+28+31+30+31;
			printf("so thu tu trong nam cua b la: %d \n",m);
			if(m%7 == 0){
				printf(" Ngay b la chu nhat");
			}else{printf("Ngay b la thu %d",m%7+1);
			}		
		}else if(a==7){
			m = m+31+28+31+30+31+30;
			printf("so thu tu trong nam cua b la: %d \n",m);
			if(m%7 == 0){
				printf(" Ngay b la chu nhat");
			}else{printf("Ngay b la thu %d",m%7+1);
			}
		}else if(a==8){
			m = m+31+28+31+30+31+30+31;
			printf("so thu tu trong nam cua b la: %d \n",m);
			if(m%7 == 0){
				printf(" Ngay b la chu nhat");
			}else{printf("Ngay b la thu %d",m%7+1);
			}
		}else if(a==9 && b<=30){
			m = m+31+28+31+30+31+30+31+31;
			printf("so thu tu trong nam cua b la: %d \n",m);
			if(m%7 == 0){
				printf(" Ngay b la chu nhat");
			}else{printf("Ngay b la thu %d",m%7+1);
			}
		}else if(a==10){
			m = m+31+28+31+30+31+30+31+31+30;
			printf("so thu tu trong nam cua b la: %d \n",m);
			if(m%7 == 0){
				printf(" Ngay b la chu nhat");
			}else{printf("Ngay b la thu %d",m%7+1);
			}
		}else if(a==11 && b<=30){
			m = m+31+28+31+30+31+30+31+31+30+31;
			printf("so thu tu trong nam cua b la: %d \n",m);
			if(m%7 == 0){
				printf(" Ngay b la chu nhat");
			}else{printf("Ngay b la thu %d",m%7+1);
			}
		}else if(a==12){
			m = m+31+28+31+30+31+30+31+31+30+31+30;
			printf("so thu tu trong nam cua b la: %d \n",m);
			if(m%7 == 0){
				printf(" Ngay b la chu nhat");
			}else{printf("Ngay b la thu %d",m%7+1);
			}																					
}else{
	printf("a hoac b chua dung dieu kien de bai");
}
}else{
	printf("a hoac b chua dung dieu kien de bai");
}
}



