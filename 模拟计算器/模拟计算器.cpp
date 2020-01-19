// 模拟计算器.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "模拟计算器.h"

#if 0               //函数指针的使用
int main()
{
    //数字
    double num1 = 0.0;
    double num2 = 0.0;
    //运算符
    char symbol = '+';
    //函数指针
    //auto ptrcalc = addtiion;
    double (*ptrcalc)(double, double) = addtiion;
    while (true)
    {
        cout << "请输入两个数字：";
        cin >> num1>>num2;
        cout << "请输入运算符：";
        cin >> symbol;
        switch (symbol)
        {
        case '+':
            ptrcalc = addtiion;
            break;
        case '-':
            ptrcalc = subtration;
            break;
        case '*':
            ptrcalc = multiplication;
            break;
        case '/':
            ptrcalc = division;
            break;
        default:
            cout << "输入错误,默认加法！" << endl;
            break;
        }
        if (cin.fail())
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
        }
        result_print(ptrcalc, num1, num2);
    }
    return 0;
}
#endif
#if 1               //函数指针数组的使用
int main()
{
    //数字
    double num1 = 0.0;
    double num2 = 0.0;
    //运算符
    char symbol = '+';
    //函数指针数组
    double (*ptrcalc[])(double, double) = { addtiion ,subtration ,multiplication ,division };
    char calc[] = { '+','-','*','/' };
    while (true)
    {
        cout << "请输入两个数字：";
        cin >> num1 >> num2;
        cout << "请输入运算符：";
        cin >> symbol;
        int i = 0;
        for (i = 0; i < sizeof(calc) / sizeof(char); i++)
        {
            if (calc[i] == symbol)
                break;
        }
        if(i < sizeof(calc) / sizeof(char))
            result_print(ptrcalc[i], num1, num2);
        else
        {
            cout << "输入错误!" << endl;
        }
        if (cin.fail())
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
        }
    }

    return 0;
}
#endif
double addtiion(double num1, double num2)
{
    return num1 + num2;
}

double subtration(double num1, double num2)
{
    return num1 - num2;
}

double multiplication(double num1, double num2)
{
    return num1 * num2;
}

double division(double num1, double num2)
{
    return num1 / num2;
}

void result_print(double(*PtrCalc)(double, double), double num1, double num2)
{
    cout << "运算结果是" << PtrCalc(num1, num2) << endl;
}
