//���ô�Сд��ĸACSLL�����32��ת��
#include<stdio.h>
#include<windows.h>
int main(void)
{
    char a,b,c,d,e;
    printf("�����볤��Ϊ���Ӣ�ĵ���");
    scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
    
    printf("��д��Ӣ�ĵ���Ϊ%c%c%c%c%c",a-32,b-32,c-32,d-32,e-32);
    system("pause");
    return 0;
}