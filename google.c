//f(n)�����Ķ���Ϊ0~n�а�����1�ĸ���
//f(13)��0~13�а���1���� 1��10��11��12��13������f(13)=6
//f(1) = 1��
//����һ��f(n)=n��nֵ
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
