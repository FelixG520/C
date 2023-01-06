#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "3.6.add.h"

/*
·本地文件包含
	#include "filename"

查找策略：先在源文件所在目录下查找，如果该头文件未找到，编译器就像查找库函数头文件一样在标准位置查找头文件。
如果找不到就提示编译错误。
*/  


int main()
{
	int ret = Add(2, 3);
	printf("ret = %d\n",ret);
	return 0;
}

/*
Linux环境的标准头文件的路径：
	/usr/include
VS环境的标准头文件的路径：
	C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\include
	注意按照自己的安装路径去找
	·库文件包含
	#include <filename.h>


查找头文件直接去标准路径下去查找，如果找不到就提示编译错误。
这样是不是可以说，对于库文件也可以使用 “” 的形式包含？
答案是肯定的，可以。
但是这样做查找的效率就低些，当然这样也不容易区分是库文件还是本地文件了。
*/







/*
comm.h和comm.c是公共模块。
test1.h和test1.c使用了公共模块。
test2.h和test2.c使用了公共模块。
test.h和test.c使用了test1模块和test2模块。
这样最终程序中就会出现两份comm.h的内容。这样就造成了文件内容的重复。
如何解决这个问题？
答案：条件编译。
每个头文件的开头写：

#ifndef __TEST_H__
#define __TEST_H__
//头文件的内容
#endif   //__TEST_H__

*/


