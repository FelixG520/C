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



#ifndef __3_6_ADD__
#define __3_6_ADD__

int Add(int x, int y);
#endif


//或
//#pragma once
//int Add(int x, int y);
