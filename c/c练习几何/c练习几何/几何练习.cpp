#include<stdio.h>
int main(void)
{
    double a,b;
    printf("请输入圆柱体的底面半径：");
    scanf("%lf",&a);
    printf("请输入圆柱体的高：");
    scanf("%lf",&b);
    printf("圆柱体的表面积是%.2f\n",2*a*a*3.14+2*a*3.14*b);
    printf("圆柱体的体积为%.2f\n",a*a*3.14*b);
    return 0;

}