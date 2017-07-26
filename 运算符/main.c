//
//  main.c
//  运算符
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
     // int 占用4个字节 double 占用8个字节
     // 只是相同类型的数据才能进行运算, 隐式类型转换 将小类型转换为大类型, 然后再进行运算
     // 在赋值的时候系统又给我们进行了一次隐式类型转换
     // 发现, 如果在隐式类型转换的时候, 将大类型转换为小类型会丢失精度
     int result = 10.9;
     printf("result = %d\n", result);
     
     // 强制类型转换格式: (类型)被强制类型转换的数据
     int result2 = (int)10.9;
     printf("result2 = %i", result2);
     
     // 自动类型提升
     // 自动类型的提升, 将参与运算的数据都转换为同一类型后再运算
     // 会自动将小的数据类型提升为大的数据类型
     int result3 = 1 + 9.9; // 1.0 + 9.9 = 10.9
     */
    
    /*
     // 在算术运算中, 参与运算的是什么类型, 计算出来就是什么类型
     //    double result = 1.0 / 2; // 1.0 / 2.0 --> 0.5
     //    double result = (double)1 / 2;// 1.0 / 2.0 --> 0.5
     double result = (double)(1 / 2); // (double)(0) --> 0.0
     printf("result = %lf\n", result);
     */
    
    // 算术运算符的结合性, 左结合, 从左至右的计算
    // 算术运算符的优先级 * / % 大于 + -
    // 如果优先级和结合同时存在, 那么先优先级再结核性
    int result = 3 + 4 * 5 + 6;
    printf("result = %i\n", result);

    return 0;
}
