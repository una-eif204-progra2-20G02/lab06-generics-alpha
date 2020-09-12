//
// Created by Maikol Guzman on 8/24/20.
//

#include "BankTransferSender.h"//Calling BankTransferSender Class .h

BankTransferSender::BankTransferSender():ISend(){//Constructor in Inheritance with ISen Class

}
BankTransferSender::~BankTransferSender() {//Destructor of Class

}
std::string  BankTransferSender::sendPayment() const {//String method
    return "Sending the money by transference";//String argument
}
