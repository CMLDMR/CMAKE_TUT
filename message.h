#pragma once

#include <iosfwd>
#include <string>


class Message{
    public:
    Message( const std::string &msg):mMessage(msg){}

    friend std::ostream &operator<<(std::ostream &os , Message &obj){
        return obj.print(os);
    }

    private:
    std::string mMessage;
    std::ostream &print(std::ostream &os);
};