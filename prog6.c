#include<stdio.h>
int main()
{
int physics,chemistry,maths;
printf("total average of physics ,chemistry,maths");
scanf("%d%d%d",&physics,&chemistry,&maths);
printf("total marks:%d",physics+chemistry+maths);
printf("average marks:%d",(physics+chemistry+maths)/3);
return 0;
} 
