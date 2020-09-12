//
// Created by Maikol Guzman on 8/24/20.
//

#include "CashSender.h"//Calling CashSender Class .h

CashSender::CashSender():ISend(){//Constructor in Inheritance with ISen Class

}
CashSender::~CashSender() {//Destructor of Class

}
std::string CashSender::sendPayment() const {//String method
    return "Give the money in the hands";//String argument
}
