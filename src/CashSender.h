//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H//Conditional of defining Class
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H//Defining Class
#include "ISend.h"//Calling ISend Claas .h
template<typename T>
class CashSender:public ISend<T> {//Inheritance Classes, and declaration class
public://public data
    //Constructor with out parameters
    CashSender();
    //Destructor
    ~CashSender();
    //String Method
    virtual T sendPayment() const override;//Virtual override method
};
template<typename T>
CashSender<T>::CashSender():ISend<T>(){//Constructor in Inheritance with ISen Class

}
template<typename T>
CashSender<T>::~CashSender() {//Destructor of Class

}
template<typename T>
T CashSender<T>::sendPayment() const {//String method
    return "Give the money in the hands";//String argument
}

#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H//End if defining
