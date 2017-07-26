//
//  main.c
//  break关键字
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // 打十发子弹之后就不打了(打不动了)
    int number = 100;
    while (number > 0) {
        
        printf("发射子弹 %i \n", number);
        number--;
        if (number < 90) {
            printf("不打了\n");
            break;// break用于跳出循环
        }
    }
    return 0;
}
