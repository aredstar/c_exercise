//
//  main.c
//  switch语句
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

/*
 if格式：
 
 if (条件表达式)
 {
 语句；
 }
 
 switch格式：
 
 switch (条件表达式)
 {
 case 整数: // case可以有一个或多个
 语句;
 break;
 case 整数: // case可以有一个或多个
 语句;
 break;
 default:
 语句;
 break;
 }
 1.拿到条件表达式的返回值(注意返回值必须是整型)
 2.利用条件表达式的返回值和switch后面大括号中的每一个case进行比较, 判断条件表达式的返回值和case后面的整数是否相等   条件表达式 == 整数
 3.如果条件表达式的返回值等于某一个case后面的整数, 那么就会执行该case后面的语句
 4.执行完语句之后如果遇到break就会结束整个switch语句, 也就是说后面的所有语句都不会被执行
 5.如果前面的case不满足, 也就是前面的case的整数和条件表达式的返回值不相等就会继续判断后面的case
 6.如果前面所有的case都不满足, 就会执行default后面的语句
 
 if (条件表达式)
 {
 }else if(条件表达式)
 {
 }else
 {
 }
 */

int main(int argc, const char * argv[]) {
    
    int age = 6;
    /*
     结束switch语句:
     1.遇到break
     2.执行到switch对应的大括号的结束 }
     */
    switch (age) {
        case 3: // 3 == 6
            printf("该上幼儿园了\n");
            break; // break的作用就是用于结束switch语句
        case 6: // 6 == 6
            printf("该上小学了\n");
            // 没有写break
            // 注意: 如果switch中有一个case满足了条件, 那么其它所有的case和default都会失效
        case 12: // 12 == 18
            printf("该上中学了\n");
            
        default:
            printf("该上高中了\n");
            break; // 某些情况下default后面的break可以省略, 因为default后面就是}
    }
    
    return 0;
}
