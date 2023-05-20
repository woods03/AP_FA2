#pragma once
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "employee.hpp"
#include "shelf.hpp"

class Warehouse
{
private:
    std::vector<Employee> Employees;
public:

    Warehouse();
    void addEmployee(Employee employee);
};