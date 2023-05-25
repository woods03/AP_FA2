#pragma once
#include <string>
#include "icontainer.hpp"

class Pallet : public IContainer {
    private:
        
        std::string itemName;
        int itemCapacity;
        int itemCount;

    public:
        // Constructor
        Pallet(std::string itemName, int itemCapacity, int itemCount);

        Pallet();
        // Functions
        std::string getItemName();
        int getItemCount();
        int getRemainingSpace();
        bool reallocateEmptyPallet(std::string itemName, int itemCapacity);
        bool takeOne();
        bool putOne();
        bool isEmpty() const override;
        bool isFull()  const override;
        friend std::ostream &operator<<(std::ostream& os, Pallet& p);
};
