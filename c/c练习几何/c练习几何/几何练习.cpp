#include<stdio.h>
int main(void)
{
    double a,b;
    printf("������Բ����ĵ���뾶��");
    scanf("%lf",&a);
    printf("������Բ����ĸߣ�");
    scanf("%lf",&b);
    printf("Բ����ı������%.2f\n",2*a*a*3.14+2*a*3.14*b);
    printf("Բ��������Ϊ%.2f\n",a*a*3.14*b);
    return 0;

}