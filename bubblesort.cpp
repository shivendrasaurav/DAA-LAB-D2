#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
	float start_t=clock();
	int max=9,i,j,temp;
	srand(time(0));
	int a[max];
	for(i=0;i<max;i++){
		a[i]=rand();
	}
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<max;i++){
		printf("%d, ",a[i]);
	}
	Sleep(100);
	float end_t=clock();
	float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("\n\nTime Taken To Check For Uniqueness : %f",total_t);
}
