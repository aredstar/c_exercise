//
//  main.c
//  函数的定义
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

/*
 函数的定义格式:
 返回值类型 函数名称(形参列表)
 {
 函数体; // 语句; ...
 
 }
 */
/*
 初学者如何定义函数:
 应该有4个确定:
 1.确定函数名称(给函数起一个有意义的名称, 让调用者一看到名称就知道这个函数是干什么的)
 1.1函数是标示符的一种 , 遵守规则 : 26个字母 , 数字 , _组成, 遵守规范: 驼峰命名
 2.确定形参列表
 2.1形参列表的格式 (数据类型 变量名称, ...)
 2.2如何确定形参列表? 就看看以后调用函数时, 是否需要传递一些辅助的数据给函数
 3.确定返回值
 4.确定返回值类型
 4.1return的是什么类型, 那么返回值类型就写什么类型
 */

int getMax(int v1, int v2)
{
    int max = v1 > v2 ? v1 : v2;
    /*
     return有两个作用:
     1.返回数据给函数调用者
     2.结束函数
     */
    return max;
}
int main(int argc, const char * argv[]) {
    
    // 需求: 要求获取两个数的最大值
    int a = 10;
    int b = 20;
    //    int max = a > b ? a : b;
    
    int result = getMax(a , b);
    printf("result = %i\n", result);
    
    int m = 998;
    int n = 668;
    result = getMax(m, n);
    //    int max2 = m > n ? m : n;
    printf("result = %i\n", result);
    
    return 0;
}

