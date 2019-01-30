#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


int main(){
	float start_t=clock();
	int max=999,m,i;
	int a[max];
	srand(time(0));
	for(i=0;i<max;i++){
		a[i]=rand();
	}
	m=0;
	for(i=0;i<max;i++){
		if(a[i]>m)
		    m=a[i];
	}
	printf("Largest of all randomly generated numbers is : %d",m);
	Sleep(100);
	float end_t=clock();
	float total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("\n\nTime Taken To Generate Random Numbers : %f",total_t);
}
