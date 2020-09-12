#ifndef UNIT_TESTING_01_GTEST_PERSON_H//Conditional of defining Class
#define UNIT_TESTING_01_GTEST_PERSON_H//Defining Class
#include "BankTransferSender.h"//Calling BankTransferSender Class .h
#include "CashSender.h"//Calling CashSender Class .h
#include "CheckSender.h"//Calling CheckSender Class .h

#include "ISend.h"//Calling ISend Claas .h

/**
 * Abstract Class of Person
 */
template<typename T>
class Person {//Declaration Class
public://public data
    // Constructors
    Person();
    Person(const T &element, const char string[7], const char string1[10]);
    //Destructor
    virtual ~Person() = default;
    // Gets and Sets methods
    const T &getFirstName() const;
    void setFirstName(T const& element);
    const T &getLastName() const;
    void setLastName(T const& element);
    T getDocumentId() const;
    void setDocumentId(T const& element);
//Dependency methods
     T processPaymentBankTransfer();
   T processPaymentCash();
  T processPaymentCheck();
//String method
    virtual T toString() const;//virtual
    //Attributes
private://private data
    std::string firstName;//Attribute name
    std::string lastName;//Attribute lastname
    std::string documentId;//Attribute document
    ISend<std::string>* _iSend0=new BankTransferSender<std::string>();//Inheritance pointer to ISend to BankTransferSender
    ISend<std::string>* _iSend1=new CashSender<std::string>();//Inheritance pointer to ISend to CashSender
    ISend<std::string>* _iSend2=new CheckSender<std::string>();//Inheritance pointer to ISend to CheckSender
};
// Constructors with out parameters
template<typename T>
Person<T>::Person(){

}
template<typename T>
Person<T>::Person(const T &element, const char string[7], const char string1[10]):firstName(element)
,lastName(element),documentId(element){

}
// Gets and Sets methods
template<typename T>
const T &Person<T>::getFirstName() const {
    return firstName;
}
template<typename T>
void Person<T>::setFirstName(T const& element) {
    Person::firstName = element;
}
template<typename T>
const T &Person<T>::getLastName() const {
    return lastName;
}
template<typename T>
void Person<T>::setLastName(T const& element) {
    Person::lastName = element;
}
template<typename T>
T Person<T>::getDocumentId() const {
    return documentId;
}
template<typename T>
void Person<T>::setDocumentId(T const& element) {
    Person::documentId = element;
}

//Dependency methods returnin string
template<typename T>
T Person<T>::processPaymentBankTransfer() {
    return _iSend0->sendPayment();
}
template<typename T>
T Person<T>::processPaymentCash() {
    return _iSend1->sendPayment();
}
template<typename T>
T Person<T>::processPaymentCheck() {
    return _iSend2->sendPayment();
}
//String Method returning string
template<typename T>
T Person<T>::toString() const {
    std::stringstream salida;
    salida<<"Name      :  "<<Person::getFirstName()<<"\n";
    salida<<"Last-Name :  "<<Person::getLastName()<<"\n";
    salida<<"ID Number :  "<<Person::getDocumentId()<<"\n";
    return salida.str();
}
#endif //UNIT_TESTING_01_BASIC_PERSON_H//End if defining
