#include <iostream>
#include "message.h"

int main(){
    Message msg("Hello World From Static Library");
    std::cout << msg << std::endl;
    return -1;
}