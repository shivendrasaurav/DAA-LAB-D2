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
}
