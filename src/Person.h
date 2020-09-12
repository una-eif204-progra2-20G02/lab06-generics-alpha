#ifndef UNIT_TESTING_01_GTEST_PERSON_H//Conditional of defining Class
#define UNIT_TESTING_01_GTEST_PERSON_H//Defining Class
#include "BankTransferSender.h"//Calling BankTransferSender Class .h
#include "CashSender.h"//Calling CashSender Class .h
#include "CheckSender.h"//Calling CheckSender Class .h

#include "ISend.h"//Calling ISend Claas .h

/**
 * Abstract Class of Person
 */
class Person {//Declaration Class
public://public data

    // Constructors
    Person();
    Person(const std::string &firstName, const std::string &lastName, int documentId);

    //Destructor
    virtual ~Person() = default;

    // Gets and Sets methods
    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    int getDocumentId() const;

    void setDocumentId(int documentId);
//Dependency methods
    std::string processPaymentBankTransfer();
    std::string  processPaymentCash();
    std::string  processPaymentCheck();
//String method
    virtual std::string toString() const;//virtual
    //Attributes
private://private data
    std::string firstName;//Attribute name
    std::string lastName;//Attribute lastname
    int documentId;//Attribute document
    ISend * _iSend0=new BankTransferSender();//Inheritance pointer to ISend to BankTransferSender
    ISend* _iSend1=new CashSender();//Inheritance pointer to ISend to CashSender
    ISend* _iSend2=new CheckSender();//Inheritance pointer to ISend to CheckSender
};

#endif //UNIT_TESTING_01_BASIC_PERSON_H//End if defining
