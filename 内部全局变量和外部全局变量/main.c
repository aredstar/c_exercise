//
//  main.c
//  内部全局变量和外部全局变量
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>
#include "zs.h"

/*
 全局变量分为两种:
 1.外部全局变量, 默认情况下所有的全局变量都是外部全局变量
 什么事外部全局变量? 可以被其它文件访问的全局变量我们称之为外部全局变量
 2.内部全局变量, 只要给全局变量加上static关键字就是内部全局变量
 什么是内部全局变量? 只能被当前文件访问的全局变量我们称之为内部全局变量
 
 外部全局变量有一个特点:
 可以定义同名的外部全局变量
 多个同名的外部全局变量指向同一块存储空间
 
 内部全局变量有一个特点
 也可以定义多个同名的内部全局变量
 多个同名的全局变量如果不在同一个文件中, 那么指向不同的存储空间
 
 
 为了提高数据的安全性, 不让别人在其它文件中修改我们的全局变量, C语言提供了另外一个用于修改全局变量的关键字, static
 只要用static修改的全局变量就是内部全局变量, 只能在当前文件中使用
 这样就可以提高我们全局变量的安全性
 
 如果多个文件中存在同名的内部全局变量, 相互不会影响
 如果既有外部全局变量也有内部全局变量, 那么会优先访问内部全局变量
 
 
 extern:
 用于声明一个外部全局变量
 声明只需要在使用变量之前声明就可以了
 static:
 用于定义一个内部全局变量
 声明和定义的区别:
 声明不会开辟存储空间
 定义会开辟存储空间
 */

//int num; // 外部全局变量

static int num; // 内部全局变量 998

int main(int argc, const char * argv[]) {
    num = 998;
    test();
    printf("mian.c = num = %i\n", num);
    return 0;
}
