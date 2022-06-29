#include "test.h"
#include <stdlib.h>
#include <stdio.h>
#define LENGTH 16
void Test::sayHello(const char *s){
    puts(s);
}
void Test::sayWhat(const char *s){
    puts(s);
}

char* Test::foo(char *input){
   // char* m = malloc(LENGTH*sizeof(char));
   // sprintf(m, "%s", input);
    char* buf1 = "abcd1234";
    printf("size of buf1: %d\n", sizeof(buf1));
    return buf1;

}


