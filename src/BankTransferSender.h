//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H//Conditional of defining Class
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H//Defining Class
#include "ISend.h"//Calling ISend Claas .h
class BankTransferSender: public ISend  {//Inheritance Classes, and declaration class
public://public data
    //Constructor with out parameters
    BankTransferSender();
    //Destructor
    ~BankTransferSender();
    //String Method
    virtual std::string sendPayment() const override;//Virtual override method
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H//End if defining
