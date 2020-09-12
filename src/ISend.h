//
// Created by computer on 8/27/2020.
//
/* Interface Abstract Class*/
#ifndef MY_PROJECT_NAME_ISEND_H//Conditional of defining Class
#define MY_PROJECT_NAME_ISEND_H//Defining Class
#include <iostream>//Calling Library iostream
#include <string>//Calling Library string
#include <sstream>//Calling Library sstream
template<typename T>
class ISend {//Declaration Class
public://public data
//Constructor with out parameters
    ISend();
//Destructor
    ~ISend();
//String Method
virtual std::string sendPayment() const=0;//Pure virtual
};
template<typename T>
ISend<T>::ISend(){//Constructor with out parameters

}
template<typename T>
ISend<T>::~ISend() {//Destructor

}
#endif //MY_PROJECT_NAME_ISEND_H//End if defining
