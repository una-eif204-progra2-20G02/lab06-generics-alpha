//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H//Conditional of defining Class
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H//Defining Class

#include "ISend.h"//Calling ISend Claas .h
template<typename T>
class CheckSender: public ISend<T>{//Inheritance Classes, and declaration class
public://public data
    //Constructor with out parameters
    CheckSender();
    //Destructor
    ~CheckSender();
    //String Method
    virtual T sendPayment() const override;//Virtual override method
};
template<typename T>
CheckSender<T>::CheckSender():ISend<T>(){//Constructor in Inheritance with ISen Class

}
template<typename T>
CheckSender<T>::~CheckSender() {//Destructor of Class

}
template<typename T>
T CheckSender<T>::sendPayment() const {//String method
    return "Sending the check with the money";//String argument
}

#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H//End if defining
