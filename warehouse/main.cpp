#include <iostream>
#include "src/include/employee.hpp"
#include "src/include/pallet.hpp"
#include "src/include/warehouse.hpp"
#include "src/include/shelf.hpp"

int main() {
    std::cout << "Welcome to the Bosch warehouse!\nToday we are showcasing how our warehouse works!" << std::endl;
    std::cout << "First of all lets create a warehouse with 2 employees and 2 empty shelves en show it!" << std::endl;

    
    // Create a sample warehouse
    Warehouse warehouse;
    
    // Add employees to the warehouse
    Employee employee1("John", true);
    Employee employee2("Jane", false);
    warehouse.addEmployee(employee1);
    warehouse.addEmployee(employee2);

    // Add shelves to the warehouse
    Shelf shelf1;
    Shelf shelf2;
    warehouse.addShelf(shelf1);
    warehouse.addShelf(shelf2);

    // Output the warehouse information using the operator<<
    std::cout << warehouse << std::endl;

    return 0;
}
