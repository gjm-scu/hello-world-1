/*求两个数的关系*/

#include<stdio.h>
int main(void)
{
	int m,n,temp,i,t;
	
	printf("please enter two numbers: ");
	scanf("%d %d",&m,&n);
	t=m*n;
	
	if(m<n){
		temp=m;
		m=n;
		n=temp;
	}
	
	while(m%n!=0){
		temp=m%n;
		m=n;
		n=temp;
	}
	
	if(n==1){
	printf("These two numbers are prime numbers to each other");
	printf("The minimum common multiple of these two numbers is :%d",t);
    }   
	else{
	printf("The maximum common divisor of these two numbers is :%d",n);
	printf("The minimum common multiple of these two numbers is :%d",t/n);
    }
    
	return 0;
 } 
