#include <iostream>
#include "include/Warehouse.hpp"
#include "include/Shelf.hpp"

Warehouse::Warehouse() : Employees({}), shelves({}) {}

// Function to add an employee to the warehouse
void Warehouse::addEmployee(Employee employee){
    Employees.push_back(employee);
}
// function to add a shelf to the warehouse
void Warehouse::addShelf(Shelf shelf){
    shelves.push_back(shelf);
}
// Warehouse function that rearranges all the pallets for shelf in a warehouse
// Got stuck on certain points so want to clarify that i used help of chatgpt
bool Warehouse::rearrangeShelf(Shelf& shelf) {
    bool qualifiedEmployeeFound = false;
    // For each employee we check if he/she is busy or not and has a forklift certificate
    // Until one is found we use qualifiedEmployeeFound as help for return statements, standard false
    for (auto& employee : Employees) {
        if (!employee.getBusy() && employee.getForkliftCertificate()) {
            // When suitable employee found we set it on true
            qualifiedEmployeeFound = true;
            // Boolean to help use in the while loop
            //this wil rearrange the pallets until its not possible, and uses swappallet func.
            bool rearranging = true;
            while (rearranging) {
                rearranging = false;
                for (int i = 0; i < 3; i++) {
                    if (shelf.swapPallet(i, i + 1)) {
                        rearranging = true;
                    }
                }
            }

            return true;
        }
    }

    if (!qualifiedEmployeeFound) {
        return false;
    }

    return true;  // Default return statement to satisfy function signature(based of chatgpt)
}

// Function to pick items out the warehouse
// Goes through each pallet and shelf until selected amount is reached otherwise returns false
bool Warehouse::pickItems(std::string itemName, int itemCount){
    // If there are no items: return false
    if (itemCount <= 0){
        return false;
    }
    // Goes through each shelf and pallet
    // Part to check if total of items wanted is actually available
    int amountOfItems = 0;
    for (auto& shelf : shelves){
        for(auto& Pallet : shelf.pallets){
            if (Pallet.getItemName() == itemName){
                amountOfItems += Pallet.getItemCount();
            }
        }
    }
    // If statement to check if amount of selectef amount is more then available amount, if not returns false
   if (itemCount <= 0 || amountOfItems < itemCount)
    {
        return false;
    }
    //function that takes items out while wanted amount is has not been reached, uses take one func
    int takenItems = 0;
    for (auto& shelf : shelves){
        for (auto& pallet : shelf.pallets){
            if (pallet.getItemName() == itemName){
                while (takenItems < itemCount){
                    bool succes = pallet.takeOne();
                    if (succes){
                        takenItems += 1;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        
    }
    return true;
}


std::ostream &operator<<(std::ostream& os, Warehouse& w) {
    os << "Employees: " << std::endl;
    for (Employee& employee : w.Employees) {
        os << employee << std::endl;
    }

    os << std::endl << "Shelves: " << std::endl;
    for (Shelf& shelf : w.shelves) {
        os << shelf << std::endl;
    }

    return os;
}