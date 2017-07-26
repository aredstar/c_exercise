//
//  main.c
//  循环嵌套
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

/*
 什么是循环嵌套:
 while ()
 {
 while()
 {
 }
 }
 while()
 {
 do{
 }while();
 }
 do
 {
 while()
 {
 }
 }while();
 
 for (;;)
 {
 for(;;)
 {
 }
 }
 */
int main(int argc, const char * argv[]) {
    /*
     // 问题: 会打印几次
     // 结论: 循环嵌套执行的次数等于 : 外循环执行的次数 * 内循环执行的次数
     for (int i = 0; i < 2; i++) {
     for (int j = 0; j < 3; j++) {
     printf("i = %i , j = %i\n", i, j);
     }
     }
     */
    
    /*
     好友列表1
     好友1
     好友2
     好友列表2
     好友1
     好友2
     好友列表3
     好友1
     好友2
     */
    /*
     printf("好友列表1\n");
     printf("    好友1\n");
     printf("    好友2\n");
     
     printf("好友列表2\n");
     printf("    好友1\n");
     printf("    好友2\n");
     
     printf("好友列表3\n");
     printf("    好友1\n");
     printf("    好友2\n");
     */
    for (int i = 0; i < 3; i++) {// 1
        printf("好友列表%i\n", i + 1 );
        /*
         printf("    好友1\n");
         printf("    好友2\n");
         printf("    好友3\n");
         printf("    好友4\n");
         printf("    好友5\n");
         printf("    好友6\n");
         printf("    好友7\n");
         */
        for (int j = 0; j < 2; j++) {// 2
            printf("    好友%i\n", j + 1);
        }
        
    }
    
    return 0;
}

