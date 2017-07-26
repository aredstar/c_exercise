//
//  main.c
//  continue关键字
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*
     int number = 100;
     while (number > 0) {
     
     printf("发射子弹 %i\n", number);
     number--;
     if (number % 10 == 0) {
     printf("休息一下\n");
     }
     
     // 这些操作, 如果是休息就不做
     printf("还有很多复杂的操作\n");
     }
     */
    
    /*
     int number = 100;
     while (number > 0) {
     
     printf("发射子弹 %i\n", number);
     number--;
     if (number % 10 == 0) {
     printf("休息一下\n");
     continue; // 跳过本次循环, 进去下一次循环
     // 只要看到continue 那么后面的所有语句都不会执行, 会执行再次去判断条件表达式
     }
     // 这些操作, 如果是休息就不做
     printf("还有很多复杂的操作\n");
     }
     */
    
    // 把100~200之间的不能被3整除的数输出
    int number = 99;
    while (number < 200) {
        /*
         number++;
         // 当前输出语句, 并不是所有情况都需要输出, 只有当前获取到得数不能被3整除才输出
         // 如果当前获取到得数能被3整数, 就不执行printf语句
         if (number % 3 == 0) {
         continue;
         }
         printf("number = %i\n", number);
         */
        number++;
        if (number % 3 != 0) {
            printf("number = %i\n", number);
        }
        
    }
    
    return 0;
}
