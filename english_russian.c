//һ���������� 72 �ˣ����л�Ӣ����� 48 �ˣ��������� 36 �ˣ�������������� 8 �ˣ������������
//_______����
//��̣�������������72��
//     �����Ӣ��48��
//     ��������36��
//     ����������������8��
//     ��������������   �� 
//     ������������ݴ����޷�����
#include<stdio.h>
int main()
{
	int e,r,a,d,n;
	printf("please enter the total number of the travel agents:");
	scanf("%d",&a);
	printf("\nplease enter the number of the pepole who can speak English:");
	scanf("%d",&e);
	printf("\nplease enter the number of the people who can speak Russian:");
	scanf("%d",&r);
	printf("\nplease enter the number of the people who can not speak either language:");
	scanf("%d",&n);
	d=e+r-a+n;
	if (d>=0)
	printf("\nthe number of the people who can speak both language is:%d ",d);
	else
	printf("\nerror");
	return 0;
}
