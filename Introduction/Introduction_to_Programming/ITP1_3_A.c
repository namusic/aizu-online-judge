/*
複数の Hello World の出力

1000 個の "Hello World" を出力するプログラムを作成して下さい。

Input
この問題に入力はありません。

Output
各行に "Hello World" と書かれた 1000 行の文字列を出力して下さい。

Sample Input
No input
Sample Output
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World
.
.
.
.
.
.
Hello World


*/



#include <stdio.h>


int main(void)
{
	char strHello[] = "Hello World";
	int i;

	for(i = 0; i < 1000; i++)
	{
		printf("%s\n",strHello);
	}
	return 0;
}