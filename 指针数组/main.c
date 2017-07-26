//
//  main.c
//  指针数组
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*
     char str1[] = "lnj";
     char str2[] = "lmj";
     char str3[] = "jjj";
     char str4[] = "lk";
     
     char strs[4][20] =
     {
     "lnj",
     "lmj",
     "jjj",
     "lk"
     };
     */
    
    char *str1 = "lnj";
    char *str2 = "lmj";
    char *str3 = "jjj";
    char *str4 = "lk";
    
    
    // 定义数组的格式: 元素类型 数组名称[元素的个数]
    //    int  a = 10;
    //    int  b = 20;
    //    int nums[2] = {10 , 20};
    
    char *names[4] =
    {
        "lnj",
        "lmj",
        "jjj",
        "lk"
    };
    
    for (int i = 0; i < 4; i++) {
        printf("names[%i] = %s\n", i , names[i]);
    }
    
    
    
    return 0;
}

