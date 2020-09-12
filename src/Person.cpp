//
// Created by Maikol Guzman on 8/20/20.
//

#include "Person.h"//Calling Person Class .h
// Constructors with out parameters
Person::Person() {

}
// Constructors with parameters
Person::Person(const std::string &firstName, const std::string &lastName, int documentId) : firstName(firstName),
                                                                                            lastName(lastName),
                                                                                            documentId(documentId) {}
// Gets and Sets methods
const std::string &Person::getFirstName() const {
    return firstName;
}

void Person::setFirstName(const std::string &firstName) {
    Person::firstName = firstName;
}

const std::string &Person::getLastName() const {
    return lastName;
}

void Person::setLastName(const std::string &lastName) {
    Person::lastName = lastName;
}

int Person::getDocumentId() const {
    return documentId;
}

void Person::setDocumentId(int documentId) {
    Person::documentId = documentId;
}

//Dependency methods returnin string
std::string Person::processPaymentBankTransfer() {
   return _iSend0->sendPayment();
}

std::string Person::processPaymentCash() {
    return _iSend1->sendPayment();
}

std::string  Person::processPaymentCheck() {
    return _iSend2->sendPayment();
}
//String Method returning string
std::string Person::toString() const {
    std::stringstream salida;
    salida<<"Name      :  "<<Person::getFirstName()<<"\n";
    salida<<"Last-Name :  "<<Person::getLastName()<<"\n";
    salida<<"ID Number :  "<<Person::getDocumentId()<<"\n";
    return salida.str();
}