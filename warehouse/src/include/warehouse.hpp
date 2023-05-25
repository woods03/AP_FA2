#pragma once
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "employee.hpp"
#include "shelf.hpp"

class Warehouse
{
    
public:
    std::vector<Employee> Employees;
    std::vector<Shelf> shelves;
    //Constructor
    Warehouse();
    // Functions
    void addEmployee(Employee employee);
    void addShelf(Shelf Shelf);
    bool rearrangeShelf(Shelf& Shelf);
    bool pickItems(std::string itemName, int itemCount);
    friend std::ostream &operator<<(std::ostream& os, Warehouse& w);
    
};