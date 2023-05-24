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
    itemName = "";
    itemCount = 0;
    itemCapacity = 60;
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

int Pallet::getRemainingSpace(){
    return itemCapacity - itemCount;
};


bool Pallet::reallocateEmptyPallet(std::string itemName, int itemCapacity){
    if(itemCount == 0){
        this->itemName = itemName;
        this->itemCapacity = itemCapacity;
        return true;}
    else{
        return false;
    }
}

bool Pallet::takeOne(){
    if (itemCount > 0){
        itemCount = itemCount - 1;
        return true;
    }
    else{
        return false;
    }
};

bool Pallet::putOne(){
    if(itemCount == itemCapacity){
        return false;
    }    
    else{
        itemCount = itemCount +1;
    return true;
    }
};


bool Pallet::isEmpty(){
    if(itemCount == 0){
        return true;
    }
    else{
        return false;
    }
};

bool Pallet::isFull(){
    if(itemCount == itemCapacity){
        return true;
    }
    else{
        return false;
    }
};


