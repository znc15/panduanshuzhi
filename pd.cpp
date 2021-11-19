#include <stdio.h>
void main()
{
	int a,b;
	printf("请输入两个整数：\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b)printf("较大的数是：%d",a);
  else printf("较大的数是：%d \n",b);
}
