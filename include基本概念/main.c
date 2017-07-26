//
//  main.c
//  include基本概念
//
//  Created by 洪星 on 2017/7/26.
//  Copyright © 2017年 不开溜网络. All rights reserved.
//

#include <stdio.h>// 告诉系统printf函数是存在的, 告诉系统printf函数的格式(声明printf函数)

// include的作用, 是将include右边的文件拷贝到当前文件中

int main(int argc, const char * argv[]) {
    //     include指令不一定要写在文件的头部
    //#include "abc/lnj.txt"
#include "/Users/xiaomage/Desktop/课堂共享/day05/code/day05/include基本概念/abc/lnj.txt"
    
    return 0;
}
/*
 include后面的 <> 和 "" 的区别
 >如果使用<>代表会先从开发工具的编译环境中去查找
 + /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk/usr/include/
 
 >如果编译环境中没有找到, 那么会再去系统的编译环境中找
 + /usr/include/stdio.h
 
 >如果使用""代表会先从当前文件所在的文件夹下面查找
 >如果在当前文件所在的文件夹下面没有找到, 那么就回去开发工具的编译环境中去查找
 >如果编译环境中没有找到, 那么会再去系统的编译环境中找
 
 注意: include后面不一定要写文件名称 也可以写路径(相对路径/ 全路径)
 
 */
