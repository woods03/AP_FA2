#include <iostream>
#include <string>
#include "include/pallet.hpp"


Pallet::Pallet(std::string itemName, int itemCapacity, int itemCount){
    this->itemName = itemName;
    this->itemCapacity = itemCapacity;
    this->itemCount = itemCount;
};

Pallet::Pallet()
{
    this->itemName = "";
    this->itemCount = 0;
    this->itemCapacity = 60;
}


std::string Pallet::getItemName(){
    return itemName;
};

bool Pallet::setItemName(std::string itemName){
    this->itemName = itemName;
};

int Pallet::getItemCount(){
    return itemCount;
};

bool Pallet::setItemCapacity(int itemcapacity){
    this->itemCapacity = itemCapacity;
};

bool Pallet::takeOne(){
// functie schrijven
};

bool Pallet::putOne(){
// functie schrijven
};

bool Pallet::isEmpty(){
    if itemCapacity == 0:
        return true
    
    else:
        return false
}