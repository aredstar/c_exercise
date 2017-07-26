//
//  main.c
//  dowhile
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
 
 do
 {
 语句;
 ...
 }while (条件表达式);
 
 do while和while的区别:
 while如果条件表达式一开始就不满足, 那么循环体永远不会被执行
 
 do while如果条件表达式一开始就不满足, 同样会执行一次循环体
 也就是说: 无论条件表达式是否满足, do while始终会执行一次循环体
 */
int main(int argc, const char * argv[]) {
    /*
     int i = 0;
     while (i < 0) {
     printf("%i\n", i);
     i++;
     }
     
     printf("------------\n");
     
     int j = 0;
     do{
     printf("j = %i\n", j);
     j++;
     }while (j < 0);
     */
    
    // 一般情况下, 能用while就用while
    // do while一般用于校验
    
    // 2.定义变量保存用户输入的整数
    int number = -1;
    // 无论如何都需要用户输入一次数据
    /*
     while (number <= 0) {
     // 1.提示用户输入一个整数
     printf("请输入一个整数\n");
     
     // 3.接收用户输入的整数
     scanf("%i", &number);// -5 -10 5
     }
     */
    do {
        // 1.提示用户输入一个整数
        printf("请输入一个整数\n");
        
        // 3.接收用户输入的整数
        scanf("%i", &number);// -5 -10 5
    } while (number <= 0);
    
    // 4.根据用户输入的整数计算结果
    int sum = 0;
    int count = 1;
    while (count <= number) {
        printf("%i + %i\n", sum , count);
        sum = sum + count;
        count++;
    }
    printf("sum = %i\n", sum);
    
    return 0;
}
