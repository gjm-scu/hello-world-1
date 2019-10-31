#include<stdio.h>
#define N 5
int main(void)
{
	int i,j,max=0,temp,a[N];
	for (i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<N-1;i++){
		for (j=0;j<N-1-i;j++){
			if (a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for (i=0;i<N;i++){
	    printf("%d\t",a[i]);
	}
	for (i=0;i<N;i++){
		max=max*10+a[i];
	}
	printf("\n%d",max);
	return 0;
 } 
