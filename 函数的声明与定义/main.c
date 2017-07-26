//
//  main.c
//  函数的声明与定义
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>
// 以前我们在定义函数的时候, 一直都是把函数定义在main函数的前面
// C语言规定: 一般情况下, 如果想要调用一个函数, 该函数必须在调用之前出现
/*
 void printRose()
 {
 printf(" {@}\n");
 printf("  |\n");
 printf(" \\|/\n");// 在C语言中\有特殊的函数, 它是一个转义字符
 printf("  |\n");
 }
 */
// 函数的声明
// 函数的声明的作用: 在调用函数之前, 告诉系统有这个函数 \
并且告诉系统, 该函数叫什么名字, 接收什么参数, 返回什么类型的值
void printRose();
//int sum(int v1, int v2);

// 声明的其它写法
//int sum(int, int);

int sum(int, int);
int sum(int, int);
int sum(int, int);
int sum(int, int);
int sum(int, int);
int sum(int, int);
int sum(int, int);


int main(int argc, const char * argv[]) {
    printRose();
    
    //    函数的声明, 只需要在函数被使用之前告知系统就可以了, 它可以写在函数的外面也可以写在函数的里面
    int sum(int, int);
    int result = sum(10, 20);
    printf("result = %i\n", result);
    
    return 0;
}
// 完整的实现了函数的功能的代码, 称之为函数的定义(函数的实现)
void printRose()
{
    printf(" {@}\n");
    printf("  |\n");
    printf(" \\|/\n");// 在C语言中\有特殊的函数, 它是一个转义字符
    printf("  |\n");
}
// 注意: 如果函数的返回值是int类型, 那么不用写声明, 函数也不会报错

int sum(int v1, int v2)
{
    return v1 + v2;
}

/*
 C语言中是不允许重复定义(实现)同名称的函数
 int sum(int v1, int v2)
 {
 return v1 + v2;
 }
*/
