/*
3つの数の整列

３つの整数を読み込み、
それらを値が小さい順に並べて出力するプログラムを作成して下さい。

Input
３つの整数が空白で区切られて与えられます。

Output
小さい順に並べ替えた３つの整数を１行に出力して下さい。
整数の間に１つの空白を入れて下さい。

Constraints
1 ≤ ３つの整数 ≤ 10,000

Sample Input
3 8 1

Sample Output
1 3 8


*/

#include <stdio.h>

int main(void)
{
	int a,b,c;
	int tmp;

	scanf("%d %d %d",&a,&b,&c);

	if(c <= a)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if(b <= a)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if(c <= b)
	{
		tmp = c;
		c = b;
		b = tmp;
	}

	printf("%d %d %d\n",a,b,c);
	return 0;
}