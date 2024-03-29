#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*常见的浮点数：
3.14159
1E10
浮点数家族包括： float、double、long double 类型。
浮点数表示的范围：float.h中定义
*/

//int main()
//{
//	double d = 1E10;
//	printf("%lf\n", d);
//	return 0;
//}



/*
浮点数存储规则
num 和* pFloat 在内存中明明是同一个数，为什么浮点数和整数的解读结果会差别这么大？
要理解这个结果，一定要搞懂浮点数在计算机内部的表示方法。

详细解读：
根据国际标准IEEE（电气和电子工程协会） 754，任意一个二进制浮点数V可以表示成下面的形式：
	(-1) ^ S * M * 2 ^ E
	(-1) ^ s表示符号位，当s = 0，V为正数；当s = 1，V为负数。
	M表示有效数字，大于等于1，小于2。
	2 ^ E表示指数位。

举例来说：
十进制的5.0，写成二进制是 101.0 ，相当于 1.01×2 ^ 2 。
那么，按照上面V的格式，可以得出s = 0，M = 1.01，E = 2。
十进制的 - 5.0，写成二进制是 - 101.0 ，相当于 - 1.01×2 ^ 2 。那么，s = 1，M = 1.01，E = 2。

IEEE 754规定：
对于32位的浮点数，最高的1位是符号位s，接着的8 位是指数E，剩下的23位为有效数字M
对于64位的浮点数，最高的1位是符号位S，接着的11位是指数E，剩下的52位为有效数字M。

IEEE 754对有效数字M和指数E，还有一些特别规定。
前面说过， 1≤M<2 ，也就是说，M可以写成 1.xxxxxx 的形式，其中xxxxxx表示小数部分。
IEEE 754规定，在计算机内部保存M时，默认这个数的第一位总是1，因此可以被舍去，只保存后面的xxxxxx部分。
比如保存1.01的时候，只保存01，等到读取的时候，再把第一位的1加上去。这样做的目的，是节省1位有效数字。
以32位浮点数为例，留给M只有23位，将第一位的1舍去以后，等于可以保存24位有效数字。

至于指数E，情况就比较复杂。
首先，E为一个无符号整数（unsigned int）这意味着，如果E为8位，它的取值范围为0~255；如果E为11位，它的取值范围为0~2047。
但是，我们知道，科学计数法中的E是可以出现负数的，所以IEEE 754规定，存入内存时E的真实值必须再加上一个中间数，对于8位的E，
这个中间数是127；对于11位的E，这个中间数是1023。
比如，2^10的E是10，所以保存成32位浮点数时，必须保存成10+127=137，即10001001。
	0.5
	0.1
	(-1)^0 * 1.0 * 2^(-1)
	s = 0
	M = 1.0
	E = -1
	E + 127 = 126
*/ 

//int main()
//{
//	int n = 9;
//	//9.0
//	//1001.0
//	//(-1)^0 * 1.001 * 2^3
//	//(-1)^s * M     * 2^E
//	//s = 0
//	//M = 1.001
//	//E = 3
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);//1091567616
//	printf("*pFloat的值为：%f\n", *pFloat); //9.000000
//	return 0;
//}

//int main()
//{
//	float f = 5.5;//00 00 b0 40
//	//5.5
//	//101.1
//	//(-1)^ * 1.011 * 2^2
//	//s = 0         1bit
//	//M = 1.011    23bit
//	//E = 2         8bit
//	//E + 127 = 129 = 0 10000001.01100000000000000000000 = 01000000101100000000000000000000
//	//转16进制 - 0100 0000 1011 0000 0000 0000 0000 0000 = 0x 4 0 b 0 0 0 0 0
//	return 0;
//}

/*
然后，指数E从内存中取出还可以再分成三种情况：
E不全为0或不全为1
	这时，浮点数就采用下面的规则表示，即指数E的计算值减去127（或1023），得到真实值，再将有效数字M前加上第一位的1。
	比如：
	0.5（1 / 2）的二进制形式为0.1，由于规定正数部分必须为1，即将小数点右移1位，则为1.0 * 2 ^ (-1)，
	其阶码为 - 1 + 127 = 126，表示为01111110，而尾数1.0去掉整数部分为0，补齐0到23位00000000000000000000000，
	则其二进制表示形式为 :0 01111110 00000000000000000000000
E全为0
	这时，浮点数的指数E等于1 - 127（或者1 - 1023）即为真实值，
	有效数字M不再加上第一位的1，而是还原为0.xxxxxx的小数。这样做是为了表示±0，以及接近于0的很小的数字。
	(-1)^s * 1.xxx * 2^(-127) 几乎为0
	例如：0 00000000 01100000000000000000000
		  (-1)^0 * 0.011 * 2 ^（-126）
E全为1
	这时，如果有效数字M全为0，表示±无穷大（正负取决于符号位s）；
	例如：0 11111111 01100000000000000000000
		  E + 127 = 255
		  (-1)^s * 1.xxx * 2^128 表示±无穷大
	好了，关于浮点数的表示规则，就说到这里。
*/ 

int main()
{
	int n = 9;
	//00000000000000000000000000001001 - 补码
	float* pFloat = (float*)&n;
	//0 00000000 00000000000000000001001
	//E全0，(-1)^0 * 0.00000000000000000001001 * 2(-127) 几乎为0
	printf("n的值为：%d\n", n);//9
	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
	*pFloat = 9.0;
	//1001.0
	//1.001 * 2^3
	//(-1)^0 * 1.001 * 2^3
	//0 10000010 00100000000000000000000
	printf("num的值为：%d\n", n);//1091567616
	//打印整形01000001000100000000000000000000 - 正数原反补码相同 - 2^30 + 2^24 + 2^20 = 1091567616
	printf("*pFloat的值为：%f\n", *pFloat); //9.000000
	return 0;
}