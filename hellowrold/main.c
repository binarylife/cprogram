//
//  main.c
//  hellowrold
//
//  Created by bei feng on 2020/3/7.
//  Copyright © 2020 bei feng. All rights reserved.
//

#include <stdio.h>
#include <string.h>


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, 冯贝 World!\n");
    
    
    printf("\n\n 整数类型 \n\n ");
    
    printf("char 存储大小: %lu \n",sizeof(char));

    int result;
    result=sum();
    printf("x + y = %d \n",result);
    return 0;
}

 
int x;
int y;

int sum(){
    x = 10;
    y = 15;
    return x+y;
}
