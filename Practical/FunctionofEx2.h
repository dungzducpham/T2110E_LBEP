#include <stdio.h>

float average(int s[],int n){
	int sum =0;
	for(int i=0;i<n;i++){
		sum = sum + s[i];
	}
	float ave = (float)sum/n;
	return ave;
}
