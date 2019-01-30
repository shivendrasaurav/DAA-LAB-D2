#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
	float start_t=clock();
	int max=999,i,j,temp;
	int a[max],u=0,un;
	srand(time(0));
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
		if(a[i]==a[i+1]){
			printf("\n%d is getting repeated",a[i]);
		}
	}
	Sleep(100);
	float end_t=clock();
	float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("\n\nTime Taken To Check For Uniqueness : %f",total_t);
}
