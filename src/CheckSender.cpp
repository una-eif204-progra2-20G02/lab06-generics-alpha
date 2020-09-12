//
// Created by Maikol Guzman on 8/24/20.
//

#include "CheckSender.h"//Calling CheckSender Class .h
CheckSender::CheckSender():ISend(){//Constructor in Inheritance with ISen Class

}
CheckSender::~CheckSender() {//Destructor of Class

}
std::string CheckSender::sendPayment() const {//String method
    return "Sending the check with the money";//String argument
}
