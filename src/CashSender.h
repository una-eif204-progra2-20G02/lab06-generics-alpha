//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H//Conditional of defining Class
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H//Defining Class
#include "ISend.h"//Calling ISend Claas .h
class CashSender:public ISend {//Inheritance Classes, and declaration class
public://public data
    //Constructor with out parameters
    CashSender();
    //Destructor
    ~CashSender();
    //String Method
    virtual std::string sendPayment() const override;//Virtual override method
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H//End if defining
