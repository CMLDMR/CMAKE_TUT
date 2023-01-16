#include "message.h"

#include <iostream>
#include <string>

std::ostream &Message::print( std::ostream &obj ){
    obj << mMessage;
    return obj;
}