//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include<stdio.h>
int main(void)
{
	int i,f=1,n;
	for (i=10;;i++){
		n=i;
		while (n>0){
			if (n%10==1){
				f+=1;
			}
			n/=10;
		}
		if (f==i){
			printf("%d",i);
			break;
		}
	}
	return 0;
 } 
