//
//  main.c
//  递归函数练习
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

int myPow(int base, int n);
int myPow2(int base, int n);
int main(int argc, const char * argv[]) {
    /*
     设计一个函数用来计算B的n次方
     b = 2
     n = 3
     
     int result = b(3);
     b(0) = 1; // 计算0次方
     b(1) = b(0) * b; // 0次方 * 当前的这个数 == 1次方
     b(2) = b(1) * b; // 1次方 * 当前的这个数 ==  2次方
     b(3) = b(2) * b; // 2次方 * 当前的这个数 == 3次方
     b(n) = b(n - 1) * b;
     
     2(3)
     2 * 2 * 2;
     result = 1 * 2; // 计算1次方
     result = 2(result) * 2; // 1次方 * 当前的这个数 = 2次方
     result = 2 * 2(result) * 2; // 2次方 * 当前的这个数 = 3次方
     用上一次的结果 * 2
     */
    int a = 2;
    int b = 3;
    //    int resutl = myPow(a, b);
    int resutl = myPow2(a, b);
    printf("result = %i\n", resutl);
    return 0;
}
/*
 1.必须有一个明确的结束标志
 2.自己调用自己
 */
int myPow2(int base, int n)
{
    int result = 1;
    if (n <= 0) {
        // 结束条件
        return result;
    }else
    {
        return myPow2(base, n - 1) * base;
    }
}

int myPow(int base, int n)
{
    // 1.定义变量保存计算的结果
    int result = 1; //
    for (int i = 0; i < n; i++) {
        printf("%i * %i\n", result, base);
        result = result * base;
    }
    return result;
}
