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
    //原码 1000 0000 0000 0000 0000 0000 1000 0000
    //补码 1111 1111 1111 1111 1111 1111 1000 0000
    //储存 1000 0000
    //U输出；
    //原码 1111 1111 1111 1111 1111 1111 1000 0000
    printf("%u",ch);
    //ch = 128 等同 -128
    return 0;
}
*/




/*
//输出什么？
int main()
{
    char a= -1;
    signed char b=-1;
    //有符号，1111 1111
    //整型提升：1111 1111 1111 1111 1111 1111 1111 1111
    //原码 1000 0000 0000 0000 0000 0000 0000 0001
    unsigned char c=-1;
    //无符号，1111 1111
    //进行整型提升 0000 0000 0000 0000 0000 0000 1111 1111
    //为正数，是原码，直接输出
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
//不连续的枚举不能被遍历
enum DAY
{
      MON, TUE=10, WED, THU, FRI, SAT, SUN
} day;
int main()
{
    // 遍历枚举元素
    for (day = MON; day <= SUN; day++)
        {
            printf("枚举元素：%d \n", day);
        }
    return 0;
}
*/
