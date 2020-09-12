//
// Created by Maikol Guzman on 8/24/20.
//

#include <iostream>
#include "Person.h"
int main()
{
    std::cout << "Hello, Universidad Nacional!" << std::endl;
    //Pointer to class set Attributes
    Person<std::string>* _person0=new Person<std::string>();
    //Pointer to set methods set Attributes
    _person0->setFirstName("Claus");
    _person0->setLastName("Hilden");
    _person0->setDocumentId("4-2345-6435");
    //Calling string metho
    std::cout<<_person0->toString();
    //Type of transference, pointer to method
    std::cout<<_person0->processPaymentBankTransfer()<<"\n";
    //Pointer to set methods set Attributes
    _person0->setFirstName("Johan");
    _person0->setLastName("Sebastian");
    _person0->setDocumentId("1-2345-9678");
    std::cout<<"\n";
    //Calling string method
    std::cout<<_person0->toString();
    //Type of transference, pointer to method
    std::cout<<_person0->processPaymentCash()<<"\n";
    //Pointer to set methods set Attributes
    _person0->setFirstName("Mariano");
    _person0->setLastName("Figueroa");
    _person0->setDocumentId("4-5678-9890");
    std::cout<<"\n";
    //Calling string method
    std::cout<<_person0->toString();
    //Type of transference, pointer to method
    std::cout<<_person0->processPaymentCheck()<<"\n";
    return 0;
}