//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H//Conditional of defining Class
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H//Defining Class
#include "ISend.h"//Calling ISend Claas .h
template<typename T>
class BankTransferSender: public ISend<T>  {//Inheritance Classes, and declaration class
public://public data
    //Constructor with out parameters
    BankTransferSender();
    //Destructor
    ~BankTransferSender();
    //String Method
    virtual T sendPayment() const override;//Virtual override method
};
template<typename T>
BankTransferSender<T>::BankTransferSender():ISend<T>(){//Constructor in Inheritance with ISen Class

}
template<typename T>
BankTransferSender<T>::~BankTransferSender() {//Destructor of Class

}
template<typename T>
T BankTransferSender<T>::sendPayment() const {//String method
    return "Sending the money by transference";//String argument
}


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H//End if defining
