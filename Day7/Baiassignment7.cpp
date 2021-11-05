#include <stdio.h>
int main(){
	
	int xinmoichon,chonmonan,chondouong;
	int flag = 0;
		for(;;){
		flag = 0;
		printf(" Day la Menu nha hang, xin moi ban chon:\n1. Chon mon an \n2. Goi do uong \n3. Thanh toan \n4. Thoat chuong trinh \n ");

		printf("Xin moi chon: ",xinmoichon);
		scanf("%d",&xinmoichon);
		
		for(;xinmoichon > 4 || xinmoichon <=0;){
		printf("Xin moi chon lai: ",xinmoichon);
		scanf("%d",&xinmoichon);
		}
		
		if(xinmoichon == 1){
			printf("1. Com ga \n2. Pho \n3. Bun \n4. Quay lai \n");
			printf("Xin moi chon mon an: ",chonmonan);
			scanf("%d",&chonmonan);			
			
			for(;chonmonan >4 || chonmonan <=0;){
					printf("Xin moi chon lai: ",chonmonan);
					scanf("%d",&chonmonan);
			}
			if(chonmonan >=1 && chonmonan <= 3){
				printf("Xin cam on \n");
				flag = 1;
			}else{
				flag = 1;
			}
		}else if(xinmoichon == 2){
			printf("1. Cocacola \n2. Nuoc loc \n3. Tra da \n4. Quay lai \n");
			printf("Xin moi chon do uong: ",chondouong);
			scanf("%d",&chondouong);			
			
			for(;chondouong >4 || chondouong <=0;){
					printf("Xin moi chon lai: ",chondouong);
					scanf("%d",&chondouong);
			}
			if(chondouong >=1 && chondouong <= 3){
				printf("Xin cam on \n");
				flag = 1;
			}else{
				flag = 1;
			}			
		}else if(xinmoichon == 3){
			if(chonmonan == 1){
				printf("So tien mon com ga la: 30k , xin cam on \n");
			}else if(chonmonan == 2){
				printf("So tien mon pho la: 35k , xin cam on \n");
			}else if(chonmonan == 3){
				printf("So tien mon Bun la: 30k , xin cam on \n");
			}else{
				printf("Ban chua chon do an \n");
			} 
			if(chondouong == 1){
				printf("So tien Cocacola ban phai tra la: 8k , xin cam on \n");
			}else if(chondouong == 2){
				printf("Nuoc loc duoc mien phi ban ko can tra tien , xin cam on \n");	
			}else if(chondouong == 3){
				printf("So tien Tra da ban phai tra la: 3k , xin cam on \n");
			}else{
				printf("Ban chua chon do uong \n");
			}	
		}else if( xinmoichon == 4){
			break;
		}
}
}


