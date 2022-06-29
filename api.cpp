#include "test.h"
#include "api.h"

void sayHelloWorld(const char *s){
    Test ts;
    ts.sayHello(s);

}
void sayWhat(const char *s){
    Test ts;
    ts.sayWhat(s);
    
}
char* foo(char* input){
    Test ts;
    return ts.foo(input);
}
