//
//  main.c
//  while注意点
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 任何数值都有真假性
    //    while (998) {
    //        printf("lnj");
    //    }
    /*
     int age = 10;
     if (age = 5) {
     printf("success\n");
     }
     */
    /*
     int age = 10;
     while (age = 5) {
     printf("success\n");
     }
     */
    /*
     if (1)
     printf("lnj");
     */
    /*
     // 和if一样, while也可以省略大括号, 省略大括号之后, while只会执行离他最近的一条语句
     while (1)
     printf("lnj\n");
     printf("-----------\n");
     */
    /*
     if (1)
     int a = 10;
     printf("a = %i\n", a);
     */
    /*
     while (1)
     int a = 10;
     printf("a = %i\n", a);
     */
    /*
     // 其实用{}包裹起来的代码, 称之为代码块
     // ;是一条空语句
     if (0);
     printf("lnj");
     */
    /*
     while (1);
     printf("lnj");
     */
    
    // 最简单的死循环
    while (1);
    
    return 0;
}
