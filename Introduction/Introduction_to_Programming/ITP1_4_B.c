/*
円の面積と円周

半径 r の円の面積と円周の長さを求めるプログラムを作成して下さい。

Input
１つの実数 r が与えられます。

Output
面積と円周の長さを１つの空白で区切って１行に出力して下さい。出力は浮動小数点数とし、0.00001 以下の誤差を含んでもよいものとします。

Constraints
0 < r < 10,000
Sample Input
2
Sample Output
12.566371 12.566371
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