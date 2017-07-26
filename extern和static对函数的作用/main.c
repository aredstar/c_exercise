//
//  main.c
//  extern和static对函数的作用
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>
#include "zs.h"

//void demo();
/*
 函数也分为内部函数和外部函数
 默认情况下所有的函数都是外部函数
 什么是外部函数? 可以被其它文件访问的函数称之为外部函数
 什么是内部函数? 只能在当前文件中范文的函数称之为内部函数
 */
int main(int argc, const char * argv[]) {
    
    test();
    //    demo();
    return 0;
}
