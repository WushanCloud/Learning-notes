#include <stdio.h>
#include <stdlib.h>

int issacret(int row, int col, int(*check)[8], int n)
{
    int flag = 0; int k = 0;
    int i, j;

    //对要下的位置的行进行判断
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
    //对要下的位置的列进行判断
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
    //对要下的左上进行判断
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
    //对要下的坐下进行判断
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
    //对要下的右上方进行判断
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
    //对要进行的右下方进行判断
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
        printf("第%d种方法\n", count);
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
            if (issacret(row, j, check, n) == 0)//判断所下的位置是否安全,0代表安全1代表不安全
            {
                //让这一行的所有位置先为0,然后让找到的安全位置置1
                for (kj = row; kj < n; kj++)
                {
                    check[row][kj] = 0;
                }
                check[row][j] = 1;
                //继续递归下一行
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
