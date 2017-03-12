//关于if语句的使用
#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("请依次输入您的身高");
    scanf("%d",&a);
    printf("请输入您的体重");
    scanf("%d",&b);
    c=a-110;
    if(b-c>5)
    {
        printf("体重偏胖，您需要锻炼\n");
    }
    if(b-c<5)
    {
        printf("体重偏瘦，您需要多吃点\n");
    }
    return 0;



}



