#define _CRT_SECURE_NO_WAR 1

#include<stdio.h>

//算数操作符 /  %
//int main()
//{
//	int a=5 / 2; //商2余1;-->2
//	printf("a= %d\n", a);
//	//double c = 5.0 / 2;
//	double c = 5 / 2.0;
//	printf("a= %lf\n", c);
//
//	int b = 5 % 2;//取余数-->1
//	printf("b= %d\n", b);
//	//对取模操作符（“%”）来说，左右操作数都必须是整数
//	
//	return 0;
//}
//
//移位操作符 >>   <<
int main()
{
	// >> 右移操作符
	//int a = 16;
	////>>右移操作符--移动的是二进制位
	////00000000 00000000 00010000
	////int b=a >> 1;   //8
	////00000000 00000000 00001000   //正数的原码和补码相同
	//int b = a >> 2;   //4
	////右移一位有除二的效果
	////右移操作符
	////1.算术右移
	//// 正数的最高位是0，负数的最高位是1
	//// 右边丢弃，左边补原符号位（正数补0，负数补1）
	////2。逻辑右移
	////右边直接丢弃，左边补0
	//printf("b= %d\n", b); //8
	// 负数
	//int c = -1;
	////原码:10000000 00000000 00000001
	//// 符号位不变按位取反-->反码
	////反码:11111111 11111111 11111110
	//// 反码+1-->补码
	////补码:11111111 11111111 11111111
	//int d = c >> 1; 
	////需要转换成补码进行存储和移动 -->存储到内存的是补码
	// //对补码进行右移-->01111111 11111111 11111111
	// //移动后的反码：   01111111 11111111 11111110
	// //移动后的原码：   10000000 00000000 00000001 //-1
	////11111111 11111111 11111111
	////再转换成原码打印出来 -->打印出来的是原码
	//printf("d= %d\n", d);   //-1
	//当前编译器采用的是算术移位
	//
	//
	//左移操作符
	int a = 5;
	//00000000 00000000 00000101
	int b =a<< 1; //10
	//int b = a << 2;//20
	//00000000 00000000 00001010  //左边丢弃，右边补0
	printf("b= %d\n", b);   //10
	//左移有乘二的效果
	int c = -5;
	//原码：10000000 00000000 00000101
	//反码：11111111 11111111 11111010
	//补码：11111111 11111111 11111011
	int d = c << 1; //-10
	//对补码进行左移-->11111111 11111111 11110110
	//移动后的反码：   11111111 11111111 11110101
	//移动后的原码：   10000000 00000000 00001010
	printf("d= %d\n", d);
	return 0;
}