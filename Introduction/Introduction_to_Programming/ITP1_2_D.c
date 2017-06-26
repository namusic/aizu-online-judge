/* 
長方形の中に円が含まれるかを判定するプログラムを作成してください。次のように、
長方形は左下の頂点を原点とし、右上の頂点の座標 (W,H)(W,H) が与えられます。
また、円はその中心の座標 (x,y)(x,y) と半径 rr で与えられます。


長方形の中の円 

Input
５つの整数 WW、HH、xx、yy、rr が空白区切りで１行に与えられます。

Output
円が長方形の内部に含まれるなら Yes と、一部でもはみ出るならば No と１行に出力してください。

Constraints
−100≤x,y≤100
0<W,H,r≤100

Sample Input 1
5 4 2 2 1

Sample Output 1
Yes

Sample Input 2
5 4 2 4 1

Sample Output 2
No

*/

#include <stdio.h>

int main(void)
{
	int w,h,x,y,r;

	scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);


	if(w < x + r || h < y + r || x < 0 || y < 0)
	{
		printf("No\n");
	}else
	{
		printf("Yes\n");

	}

	return 0;
}