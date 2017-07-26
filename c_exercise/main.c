//
//  main.c
//  c_exercise
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//
/*
 
 C语言中每一条语句后面都必须有;号
 C语言中除了""引起来的地方, 其它任何地方都不能出现中文
 main函数中的return 0;函数返回值,可以写, 也可以不写
 main函数前面的int可以写, 可以不写
 main函数后面的()不可以省略
 同一程序中只能有一个main函数
 (int argc, const char * argv[]) 函数接受的参数
 int argc, const char * argv[] 可以没有
 printf("Hello, World!\n"); 调用系统的输出函数, 接受一个参数"Hello, World!\n"
 */


#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

//int argc, const char * argv[] 可以没有
//int main() {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}
