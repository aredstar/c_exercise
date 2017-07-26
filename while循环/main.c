//
//  main.c
//  while循环
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

/*
 if (条件表达式)
 {
 语句;
 ...
 }
 if是对给定的条件进行判断, 如果条件满足, 就执行if后面大括号中的内容
 
 while (条件表达式)
 {
 语句;
 ...
 }
 while是对给定的条件进行判断, 如果条件满足, 就执行while后面大括号中的内容, 执行完毕之后会再次判断条件表达式, 如果满足会再次执行while后面大括号中的内容, 直到条件表达式不满足位置
 术语: while后面大括号中的内容, 称之为 循环体
 
 while的应用场景: 当我们需要反复的执行某一段代码的时候就可以使用while
 */
int main(int argc, const char * argv[]) {
    
    /*
     printf("发射子弹\n");
     printf("发射子弹\n");
     printf("发射子弹\n");
     printf("发射子弹\n");
     printf("发射子弹\n");
     printf("发射子弹\n");
     printf("发射子弹\n");
     printf("发射子弹\n");
     printf("发射子弹\n");
     printf("发射子弹\n");
     */
    
    // 0.先将while的格式写好
    // 1.找到需要重复执行的代码, 将需要重复执行的代码放到循环体中
    // 2.确定结束条件(确定条件表达式)
    
    int count = 100;
    while (count > 0) {
        printf("发射子弹 %i\n", count);
        //        count = count - 1;
        //        count -= 1;
        count--;
    }
    // 注意点: 和if一样, 如果条件表达式一开始就不满足, 那么循环体就不会被执行
    return 0;
}
