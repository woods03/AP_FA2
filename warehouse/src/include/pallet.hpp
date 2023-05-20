#pragma once
#include <iostream>
#include <string>
#include <list>
#include <vector>

class Pallet
{
private:
    std::string itemName;

public:
    int itemCount;
    int itemCapacity;
    Pallet();
    Pallet(std::string itemName, int itemCapacity, int itemCount);
    std::string getItemName() const;
    int getItemCount() const;
    int getRemainingSpace() const;
    bool relocateEmptyPallet(std::string itemName, int itemCapacity);
    bool takeOne();
    bool putOne();
};