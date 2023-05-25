#pragma once
#include <string>
#include <array>
#include "pallet.hpp"
#include "icontainer.hpp"


class Shelf : public IContainer {

    public:
        // Constructor
        std::array<Pallet, 4> pallets;

        Shelf();
        // Functions
        bool swapPallet(int slot, int slot2);
        bool isEmpty() const override;
        bool isFull()  const override;
        friend std::ostream &operator<<(std::ostream& os, Shelf& s);

        
};