#include <stdio.h>
#include <math.h>
// tim so nguyen to tiep theo cua n
int TimSNTtieptheon(int n){
	int m = n+1;
	for(;m>1;m++){
		int count = 0;
		for(int i=1;i<m;i++){
			if(m%i == 0){
				count++;
			}
		}
		if(count == 1)
			break;
	}
	return m;
}
//Tinh tong cac chu so cua so nguyen n
int TinhTcacchusocuan(int n){
	int S;
	while(n>0){
		S = S + n%10;
		n = n/10;
	}
	return S;	
}

// Tinh chu vi tam giac
int Tinhchuvi(int a, int b, int c){
	int Chuvi = 0;
	if (a+b>c && b+c>a && a+c>b){
		Chuvi = a+b+c;
}
	return Chuvi;
}
// Tinh dien tich tam giac
int Tinhdientich(int a, int b, int c){
	int Dientich = 0;
	if (a+b>c && b+c>a && a+c>b){
		Dientich = sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
}
	return Dientich;	
}
// Tim uoc chung lon nhat cua 2 so
int Timuocchungmax(int a, int b){
	int m = 1;
	for(int i = 1;i<=a || i<=b ;i++){
		if(a%i == 0 && i>m && b%i == 0 ){
			m = i;
		}
	}
	return m;
}
// Tim boi chung nho nhat cua 2 so
int Timboichungmin(int a, int b){
	int m;
	for(int i = 1; i<=a*b; i++){
		if(i%a == 0 && i%b ==0){
			m = i;
			break;
		}
	}
	return m;
}


