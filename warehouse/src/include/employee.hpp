#pragma once
#include <iostream>
#include <string>
#include <list>
#include <vector>

class Employee
{
private:
    std::string name;

public:
    bool busy;
    bool forkliftCertificate;
    Employee();
    std::string getName();
    Employee(std::string name, bool forkliftCertificate);
    std::string getName() ;
    bool getBusy() ;
    void setBusy(bool busy);
    bool getForkliftCertificate();
    void setForkliftCertificate(bool forkliftCertificate);
};