#include <stdio.h>
#include <stdlib.h>



int main()
{
char a[1000];
int i;
for(i=0; i<1000; i++)
{
a[i] = -1-i;
}
for(i=0; i<2000; i++)
printf("%4d",a[i]);
//printf("%d",strlen(a));
return 0;
}



/*
int main ()
{
    char ch = -128;
    //ԭ�� 1000 0000 0000 0000 0000 0000 1000 0000
    //���� 1111 1111 1111 1111 1111 1111 1000 0000
    //���� 1000 0000
    //U�����
    //ԭ�� 1111 1111 1111 1111 1111 1111 1000 0000
    printf("%u",ch);
    //ch = 128 ��ͬ -128
    return 0;
}
*/




/*
//���ʲô��
int main()
{
    char a= -1;
    signed char b=-1;
    //�з��ţ�1111 1111
    //����������1111 1111 1111 1111 1111 1111 1111 1111
    //ԭ�� 1000 0000 0000 0000 0000 0000 0000 0001
    unsigned char c=-1;
    //�޷��ţ�1111 1111
    //������������ 0000 0000 0000 0000 0000 0000 1111 1111
    //Ϊ��������ԭ�룬ֱ�����
    printf("a=%d,b=%d,c=%d",a,b,c);
    return 0;
}
*/



/*
struct DAta
{
    //long int a;//4
    //int b;
    //short int c;
    //float d;
    //double e;
    //long long f;//8
    //long t;
}data;


union Data{
    int i;
    double d;
    float f;
    char str[25];
}data;

int main ()
{
    printf("%d",sizeof(data));
    return 0;
}
*/






/*
//��������ö�ٲ��ܱ�����
enum DAY
{
      MON, TUE=10, WED, THU, FRI, SAT, SUN
} day;
int main()
{
    // ����ö��Ԫ��
    for (day = MON; day <= SUN; day++)
        {
            printf("ö��Ԫ�أ�%d \n", day);
        }
    return 0;
}
*/
