//
//  main.c
//  赋值运算符
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 最简单的赋值运算符
    // 赋值运算符的结合性: 从右至左
    //    int result = 10;
    
    // 复合赋值运算符: += -= *= /= %=
    int result = 10;
    //    result = result + 5;// result = 10 + 5; result = 15
    //    result += 5; // 相当于 result = result + 5;
    result -= 5; // 相当于result = result - 5;
    printf("result = %i\n", result);
    return 0;
}
