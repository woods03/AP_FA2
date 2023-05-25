#include <iostream>
#include "include/Warehouse.hpp"
#include "include/Shelf.hpp"

Warehouse::Warehouse(){}

void Warehouse::addEmployee(Employee employee){
    Employees.push_back(employee);
}

void Warehouse::addShelf(Shelf shelf){
    shelves.push_back(shelf);
}

//to add in future comments: chatgpt helped with this :P
bool Warehouse::rearrangeShelf(Shelf& shelf) {
    bool qualifiedEmployeeFound = false;

    for (auto& employee : Employees) {
        if (!employee.getBusy() && employee.getForkliftCertificate()) {
            qualifiedEmployeeFound = true;

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

    return true;  // Default return statement to satisfy function signature
}


bool Warehouse::PickItems(std::string itemName, int itemCount){
    if (itemCount <= 0){
        return false;
    }
    int amountOfItems = 0;
    for (auto& shelf : shelves){
        for(auto& Pallet : shelf.pallets){
            if (Pallet.getItemName() == itemName){
                amountOfItems += Pallet.getItemCount();
            }
        }
    }
   if (itemCount <= 0 || amountOfItems < itemCount)
    {
        return false;
    }
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