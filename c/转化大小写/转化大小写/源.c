//利用大小写字母ACSLL码相差32来转化
#include<stdio.h>
#include<windows.h>
int main(void)
{
    char a,b,c,d,e;
    printf("请输入长度为五的英文单词");
    scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
    
    printf("大写的英文单词为%c%c%c%c%c",a-32,b-32,c-32,d-32,e-32);
    system("pause");
    return 0;
}