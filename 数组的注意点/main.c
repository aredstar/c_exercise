//
//  main.c
//  数组的注意点
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char nums[2] = {1, 5};
    //    0 , 1 , 2
    char values[3] = {7, 8, 9};
    
    // 注意点: 在使用数组的时候, 一定不要访问不属于字节的存储空间, 这样会导致数据混乱
    // 有时候如果访问了不属于自己的存储空间, 程序会报错
    //    values[3] = 44;
    //    printf("values[3] = %i\n", values[3]);
    //    printf("nums[0] = %i\n", nums[0]);
    
    nums[-1] = 88;
    printf("values[2] = %i\n", values[2]);
    return 0;
}
