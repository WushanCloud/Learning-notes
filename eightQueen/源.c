#include <stdio.h>
#include <stdlib.h>

int issacret(int row, int col, int(*check)[8], int n)
{
    int flag = 0; int k = 0;
    int i, j;

    //��Ҫ�µ�λ�õ��н����ж�
    for (j = 0; j < n; j++)
    {
        if (check[row][j] == 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return 1;
    //��Ҫ�µ�λ�õ��н����ж�
    for (i = 0; i < n; i++)
    {
        if (check[i][col] == 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return 1;
    //��Ҫ�µ����Ͻ����ж�
    for (i = row, k = col; i >= 0 && k >= 0; i--, k--)
    {
        if (check[i][k] == 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return 1;
    //��Ҫ�µ����½����ж�
    for (i = row, k = col; i < n && k < n; i++, k--)
    {
        if (check[i][k] == 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return 1;
    //��Ҫ�µ����Ϸ������ж�
    for (i = row, k = col; i < n && k>0; i--, k++)
    {
        if (check[i][k] == 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return 1;
    //��Ҫ���е����·������ж�
    for (i = row, k = col; i < n && k < n; i++, k++)
    {
        if (check[i][k] == 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        return 1;

    return 0;
}

void eightqueen(int row, int col, int(*check)[8], int n)
{
    int i, j = 0; int count = 0; int lzzsz = 0; int kj = 0; int check2[8][8];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            check2[i][j] = check[i][j];
        }
    }
    if (row == 8)
    {
        count++;
        printf("��%d�ַ���\n", count);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d", check2[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        for (j = 0; j < n; j++)
        {
            if (issacret(row, j, check, n) == 0)//�ж����µ�λ���Ƿ�ȫ,0����ȫ1������ȫ
            {
                //����һ�е�����λ����Ϊ0,Ȼ�����ҵ��İ�ȫλ����1
                for (kj = row; kj < n; kj++)
                {
                    check[row][kj] = 0;
                }
                check[row][j] = 1;
                //�����ݹ���һ��
                lzzsz++;
                eightqueen(row + 1, kj, check, n);
            }
        }
    }
    //printf("%d\n", lzzsz);
}




//int main()
//{
//    int check[8][8]; int n = 8;
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            check[i][j] = 0;
//        }
//    }
//
//
//    eightqueen(0, 0, check, 8);
//    return 0;
//}
