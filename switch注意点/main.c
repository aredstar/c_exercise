//
//  main.c
//  switch注意点
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*
     // 1.Switch得条件表达式注意点
     // Switch的条件表达式必须是返回整数的表达式, 也就是说()中只能放整数
     // 或者写能够转换为整数的类型也可以, 例如char, 因为char类型可以转换为int类型, 所以写char也可以
     switch ('A') {
     case 6:
     printf("6");
     break;
     case 8:
     printf("8");
     break;
     default:
     printf("other");
     break;
     }
     */
    
    /*
     // 2.case的取值
     // Switch中, case后面只能放返回值是整数的表达式或者整数, 或者能够转换为整数的类型
     // case的取值不能重复
     // case后面不能放变量, 因为系统在编译的时候会对Switch后面所有的case进行优化, 会根据case后面的常量值, 生成一张取值表
     int number = 7;
     switch (6) {
     case 3 + 3:
     printf("6");
     break;
     case 'A':
     printf("8");
     break;
     //        case number:
     //            printf("8");
     //            break;
     default:
     printf("other");
     break;
     }
     */
    // default的位置问题
    // Switch中的default可以随便放
    // 无聊default写到什么地方, 它都会最后执行(只有前面所有的case都不满足的情况才会执行)
    // 只要某一个case满足, 那么后面所有的case和default都会失效
    // 同理: 只要default满足, 那么所有的case都会失效
    switch (20) {
        default:
            printf("other\n");
            //            break;
        case 6:
            printf("6");
            break;
        case 8:
            printf("8");
            break;
    }
    return 0;
}
