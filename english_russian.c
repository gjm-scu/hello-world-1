//一个旅行社有 72 人，其中会英语的有 48 人，会俄语的有 36 人，两样都不会的有 8 人，两样都会的有
//_______个。
//编程：输入旅行社有72人
//     输入会英语48人
//     输入会俄语36人
//     输入两样都不会有8人
//     输出两样都会的有   人 
//     输出：输入数据错误，无法计算
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
