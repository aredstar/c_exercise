//
//  main.c
//  结构体定义方式
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 1.先定义结构体类型, 在定义结构体变量
    /*
     struct Person
     {
     int age;
     char *name;
     double height;
     };
     struct Person sp;
     */
    // 2.定义结构体类型的同时定义结构体变量
    /*
     struct Person
     {
     int age;
     char *name;
     double height;
     } sp;
     // 数据类型 变量名称
     sp.age = 30;
     printf("age = %i\n", sp.age);
     
     struct Person  sp1;
     sp1.name = "lnj";
     printf("name = %s\n", sp1.name);
     */
    
    // 3.定义结构体类型的同时定义结构体变量, 并且省略结构体名称
    // 如果在定义结构体类型的同时定义结构体变量, 那么可以省略结构体类型名称
    // 弊端: 由于结构体类型没有名称, 所以以后就不能使用该结构体类型
    // 优点: 如果结构体类型只需要使用一次, 那么可以使用该方式
    struct
    {
        int age;
        char *name;
        double height;
    } sp;
    sp.age = 55;
    printf("age = %i\n", sp.age);
    
    
    return 0;
}

