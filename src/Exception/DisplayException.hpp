//
// Created by GeekP on 12/09/2017.
//

#ifndef PETITRPG_DISPLAYEXCEPTION_HPP
#define PETITRPG_DISPLAYEXCEPTION_HPP

#include <string>


class DisplayException {
    std::string message;
public:
    DisplayException(const std::string &message):
            message(message){}
};


#endif //PETITRPG_DISPLAYEXCEPTION_HPP
