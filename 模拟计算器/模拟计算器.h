#pragma once

#include <iostream>

using namespace std;
//加法
double addtiion(double, double);
//减法
double subtration(double, double);
//乘法
double multiplication(double, double);
//除法
double division(double, double);

//输出
void result_print(double (*)(double, double), double, double);
