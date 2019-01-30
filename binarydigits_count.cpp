#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
	float start_t=clock();
	int n,i=1,bin[20]={0},j;
	srand(time(0));
	n=30406;
	printf("Randomly Generated Number Is : %d\nBinary Replresntation Of n Is :",n);
	while(n>0){
		bin[i]=n%2;
		n=n/2;
		i++;
	}
	for(j=19;j>0;j--){
		printf("%d",bin[j]);
	}
	printf("\nNo Of Digits In Binary Representation Of n Is : %d",i);
	Sleep(100);
	float end_t=clock();
	float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("\n\nTime Taken To Check For Uniqueness : %f",total_t);
}
