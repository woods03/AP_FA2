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
    Employee(std::string name, bool forkliftCertificate);
    std::string getName() const;
    bool getBusy() const;
    void setBusy(bool busy);
    bool getForkliftCertified() const;
    void setForkliftCertificate(bool forkliftCertificate);
};