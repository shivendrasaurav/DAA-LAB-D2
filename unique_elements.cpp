#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
	float start_t=clock();
	int max=999,i,j;
	int a[max],u=0,un;
	srand(time(0));
	for(i=0;i<max;i++){
		a[i]=rand();
	}
	for(i=0;i<max-1;i++){
		un=a[i];
		for(j=i+1;j<max;j++){
			if(a[j]==un){
			    printf("\n%d Is Getting Repeated",un);
			}
		}
	}
	Sleep(100);
	float end_t=clock();
	float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("\n\nTime Taken To Check For Uniqueness : %f",total_t);
}
