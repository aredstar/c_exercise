//
//  main.c
//  for和white的对比
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // 什么时候用while?
    // 如果用于控制循环的增量在循环执行完毕之后还需要使用, 那么可以使用while
    int count = 100; // 用于控制循环什么时候结束
    while (count > 0) {
        printf("发射子弹 %i\n", count);
        count--; // 控制循环的次数, 当每次循环执行完毕之后都会执行一次
    }
    printf("count = %i\n", count);
    
    // 如果用于控制循环的增量在循环执行完毕之后不需要使用了, 那么可以使用for
    for (int number = 100; number > 0; number--) {
        printf("发射子弹%i\n", number);
    }
    //    printf("number = %i\n", number);
    
    // 其实在企业开发中, 只要会用for就可以了, while能做的for都能做
    return 0;
}
