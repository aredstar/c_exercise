//
//  main.c
//  main函数分析
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

// main是函数的名称, 是系统规定的名称, 系统启动程序就会调用名称叫做main的函数
// main函数只能由系统调用 ,不能手动调用

// 其实系统在启动程序的时候, 会给我们的程序传递一些参数
//  argc : 就是系统传递进来的参数个数, 默认是1
//  argv : 就是系统传递进来的参数实际的值, 默认是程序的名称
int main(int argc, const char * argv[]) {
    
    printf("argc = %i\n", argc);
    printf("argv = %s\n", argv[0]);
    printf("argv = %s\n", argv[1]);
    
    // return 结束函数
    // 0 : 返回给操作系统, 如果返回0, 代表程序整除结束, 如果返回其它值代表程序非正常结束
    return 0;
}
