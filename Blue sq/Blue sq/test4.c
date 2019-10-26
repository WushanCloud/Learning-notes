#include"main.h"
//凑算式
//
//     B     DEF
//A + --- + ------ - = 10
//     C     GHI
//a+b/c+(d*100+e*10+f)/(d*100+e*10+f)
//这个算式中A~I代表1~9的数字，不同的字母代表不同的数字。
//比如：
//6 + 8 / 3 + 952 / 714 就是一种解法，
//5 + 3 / 1 + 972 / 486 是另一种解法。
//
//这个算式一共有多少种解法？
//
//注意：你提交应该是个整数，不要填写任何多余的内容或说明性文字。
void Func4()
{
	double a, b, c, d, e, f, g, h, i;

	//int temp;
	int sum = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			for (c = 1; c <= 9; c++)
			{
				for (d = 1; d <= 9; d++)
				{
					for (e = 1; e <= 9; e++)
					{
						for (f = 1; f <= 9; f++)
						{
							for (g = 1; g <= 9; g++)
							{
								for (h = 1; h <= 9; h++)
								{
									i = 50 - a - b - c - d - e - f - g - h;
									if (   a == b || a == c || a == d || a == e || a == f || a == g || a == h || a == i
										|| b == c || b == d || b == e || b == f || b == g || b == h || b == i
										|| c == d || c == e || c == f || c == g || c == h || c == i
										|| d == e || d == f || d == g || d == h || d == i
										|| e == f || e == g || e == h || e == i
										|| f == g || f == h || f == i
										|| g == h || g == i
										|| h == i
										)
									{
										
									}
									else if ((a + b / c + (d * 100 + e * 10 + f) / (d * 100 + e * 10 + f)) ==10)
									{
										sum++;
									}

								}
							}
						}
					}
				}
			}
		}
	}
	printf("%d", sum);

}