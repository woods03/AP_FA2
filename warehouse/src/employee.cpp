#include <iostream>
#include "include/employee.hpp"
#include <string>



Employee::Employee(std::string name, bool forkliftCertificate): name(name), forkliftCertificate(forkliftCertificate) {}


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

std::ostream &operator<<(std::ostream& os, Employee& e) {
    os << "(Name: " << e.name << ", Certificate: "  << e.forkliftCertificate << ", Busy: " << e.busy << ")";
    return os;