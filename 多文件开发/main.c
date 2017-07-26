//
//  main.c
//  多文件开发
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>
#include "lisi.h"

//int sum(int v1, int v2);
//int average(int v1, int v2);
//int test(int v1, int v2);
/*
 弊端:
 1.李四改了张三也要改
 2.张三每次还要去李四的文件中一个一个的找
 为了解决这个问题, 可以引用.h文件来解决 , 引入头文件来解决
 */
int main(int argc, const char * argv[]) {
    /*
     国家电力系统
     计算两个用户的电费
     张三 : 菜鸟
     李四 : 大神
     */
    /*
     int result =  sum(10, 20);
     printf("result = %i\n", result);
     */
    /*
     int result = sum(10, 20);
     printf("result = %i\n", result);
     
     result = average(10, 20);
     printf("result = %i\n", result);
     
     printf("%i\n", test(10, 20));
     */
    printf("%i\n", sum(10, 20));
    printf("%i\n", average(10, 20));
    printf("%i\n", test(10, 20));
    printf("%i\n", new1(998));
    
    return 0;
}

/*
 int sum(int v1, int v2)
 {
 int value = v1 + v2;
 return value;
 }
 */
