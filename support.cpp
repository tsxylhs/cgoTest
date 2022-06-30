#include<iostream>

extern int count;
void wirte_extern(void){
    std::cout<< "Count is " <<count <<std::endl;
}