#include <iostream>
#include "include/employee.hpp"
#include <string>



Employee::Employee(){

};

Employee::Employee(std::string name, bool forkliftCertificate){
    this ->name = name;
    this ->forkliftCertificate = forkliftCertificate;
};

std::string Employee::getName(){
    return name;
};

bool Employee::getBusy(){
    return busy;
};

void Employee::setBusy(bool busy){
    this->busy = busy;
};

bool Employee::getForkliftCertificate(){
    return forkliftCertificate;
};

void Employee::setForkliftCertificate(bool forkliftCertificate){
    this->forkliftCertificate = forkliftCertificate;
};
