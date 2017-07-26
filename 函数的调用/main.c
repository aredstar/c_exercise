//
//  main.c
//  函数的调用
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

/*
 4个确定:
 1.确定函数名称
 2.确定形参列表
 3.确定返回值
 4.确定返回值类型
 */
// 注意: 形参列表中的变量只有当函数被调用时才会分配存储空间
// 形参列表中的每一个变量我们称之为, 形式参数, 简称形参
int average(int v1, int v2)
{
    int average = (v1 + v2) / 2;
    return average;
}
int main(int argc, const char * argv[]) {
    // 需求: 求两个数的平均值
    int a = 10;
    int b = 20;
    // 调用函数时传入的参数, 我们称之为实际参数, 简称实参
    int result = average(a, b);
    printf("result = %i\n", result);
    return 0;
}

