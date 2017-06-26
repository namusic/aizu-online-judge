/*
約数の数

３つの整数 a、b、c を読み込み、a から b までの整数の中に、
c の約数がいくつあるかを求めるプログラムを作成してください。

Input
a、b、c が１つの空白区切りで１行に与えられます。

Output
約数の数を１行に出力してください。

Constraints
1≤a,b,c≤10000
a≤b

Sample Input
5 14 80

Sample Output
3

*/

#include <stdio.h>

int main(void)
{
	int a,b,c,i,count;
	count = 0;

	scanf("%d %d %d",&a,&b,&c);

	for(i = a; i <= b; i++)
	{
		if(c % i == 0)
		{
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}