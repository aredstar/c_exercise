//
//  main.c
//  for循环
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

/*
 while (条件表达式)
 {
 语句;
 ...
 }
 
 for (初始化表达式;条件表达式;循环后增量表达式)
 {
 语句;
 ...
 }
 条件表达式: 和while, dowhile一样, 只有条件满足才会执行循环体
 初始化表达式: 在整个for循环的生命周期中, 初始化表达式只会执行一次
 循环后增量表达式: 会在每次循环体之后完毕之后调用一次
 */
int main(int argc, const char * argv[]) {
    /*
     int count = 100; // 用于控制循环什么时候结束
     while (count > 0) {
     printf("发射子弹 %i\n", count);
     count--; // 控制循环的次数, 当每次循环执行完毕之后都会执行一次
     }
     */
    // 能用while做得用for都能做, for相当于while的升级版
    // 以后如果定义的便利仅仅用于控制循环什么时候结束, 循环结束之后就不在使用了, 那么可以使用for循环
    // 如果将用于控制循环的变量定义在for循环中, 那么循环结束了, 变量也释放了
    //    int number = 100;
    //            1            2/5/8/11        4/7/10
    for (int number = 100;number > 0;number--)
    {
        // 3/6/9
        printf("发射子弹 %i\n", number);
        //        number--;
    }
    //    printf("%i", number);
    return 0;
}
