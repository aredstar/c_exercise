//
//  main.c
//  for注意点
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
     // 1.任何数值都有真假新
     for (; 1; ) {
     printf("lnj");
     }
     */
    /*
     // 2.for也可以省略大括号, for省略大括号的时候, 只会执行离他最近的一条语句
     for (;0;)
     printf("lnj");
     printf("other");
     */
    /*
     // 3.作用域混乱
     for (;1;)
     int a = 10;
     printf("a = %i\n", a);
     */
    /*
     // 5.;空语句
     for (;0;);
     {
     printf("lnj");
     }
     */
    /*
     // 6.其实, 初始化表达式和循环后增量表达式可以写多条语句, 语句之间用,号连接
     for (int i = 0, j = 0; i < 2; i++, j++)
     {
     printf("i = %i j = %i\n", i, j);
     }
     */
    
    // 7.作用域问题
    /*
     int a = 10;
     //    int a = 20;
     {
     int a = 20;
     printf("a = %i\n", a);
     }
     */
    /*
     for (int i = 0; i < 3; i++) {
     int i = 5;
     printf("i = %i\n", i);
     }
     */
    /*
     for (int i = 0; i < 2; j++) {
     int j = 0;
     }
     */
    
    // 最简单的死循环
    //    for(;1;);
    for(;;); // 注意: for循环中的条件表达式默认为真
    printf("lnj");
    
    return 0;
}
