//С���� 5 �����ֿ�Ƭ������ֱ�Ϊ���� 1�� 2�� 3�� 6�� 9��С�������� 5 �����ֿ�Ƭ���һ������ 5 λ
//�����������λ����_______��
//��̣���������5�����֣����������Ϊ����5λ������������������5λ�����������ERROR��
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
