//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//素数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位素数输出。如果不存在5位素数，则输出ERROR。
#include<stdio.h>
#include<math.h>
int is_prime(int num);
int main(void) 
{
	int a[5],b,c,d,e,f,g,num_1,num_2,max=1;
	for (b=0;b<5;b++)
	    scanf("%d",&a[b]);
	for (c=0;c<5;c++){
		for (d=0;d<5;d++){
			for (e=0;e<5;e++){
				for (f=0;f<5;f++){
					for (g=0;g<5;g++){
						if ((c!=d)&&(d!=e)&&(e!=f)&&(f!=g)){
							num_1=a[c]*10000+a[d]*1000+a[e]*100+a[f]*10+a[g];
							num_2=is_prime(num_1);
							if (num_2>max)
							    max=num_2;
						}
					}
				}
			}
		}
	}
	if(max==1)
	   printf("ERROR");
	else
	   printf("%d",max);
	 return 0;
}
int is_prime(int num)
{
	int i;
	for (i=2;i<(int)sqrt(num);i++){
		if (num%i==0)
		   return 1;
	}
	if (i>(int)sqrt(num))
	    return num;
	    
}
