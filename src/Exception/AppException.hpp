//
// Created by GeekP on 12/09/2017.
//

#ifndef PETITRPG_APPEXCEPTION_HPP
#define PETITRPG_APPEXCEPTION_HPP

#include <string>

class AppException {
    std::string message;
public:
    AppException(const std::string &message):
            message(message){}
};


#endif //PETITRPG_APPEXCEPTION_HPP
