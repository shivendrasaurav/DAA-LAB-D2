#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
	float start_t=clock();
	int n,i=0;
	srand(time(0));
	n=rand();
	printf("%d",n);
	while(n>1){
		n=n/2;
		i++;
	}
	printf("\nNo Of Digits In Binary Representation Of n Is : %d",i+1);
	Sleep(100);
	float end_t=clock();
	float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("\n\nTime Taken To Check For Uniqueness : %f",total_t);
}
