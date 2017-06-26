/*
割り算

２つの整数 a と b を読み込んで、以下の値を計算するプログラムを作成して下さい：

a ÷ b ： d (整数)
a ÷ b の余り ： r (整数)
a ÷ b ： f (浮動小数点数)
Input
1行に２つの整数 a, b が与えられます。

Output
d, r, f を１つの空白で区切って１行に出力して下さい。fについては、0.00001以下の誤差があってもよいものとします。

Constraints
1 ≤ a, b ≤ 109
Sample Input
3 2
Sample Output
1 1 1.50000
*/

#include <stdio.h>
#include <math.h>
 
int main(void)
{
     
    double r,area,len;
 
    scanf("%lf",&r);
 
    len = 2 * r * M_PI;
    area = r * r * M_PI;
 
    printf("%f %f",area,len);
    return 0;
 
}