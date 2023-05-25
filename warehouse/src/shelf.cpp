#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "include/shelf.hpp"

Shelf::Shelf() : pallets({Pallet(), Pallet(), Pallet(), Pallet()}) {

}

bool Shelf::swapPallet(int slot1, int slot2) {
    if (pallets[slot1].getItemCount() > pallets[slot2].getItemCount()) {
        std::swap(pallets[slot1], pallets[slot2]);
        return true;
    }
    else{
        return false;
    }
};

bool Shelf::isEmpty() const{
    for (Pallet pallet : pallets){
        if (pallet.getItemCount() != 0){
            return false;
        }
    }
    return true;
};


bool Shelf::isFull() const{
    for (Pallet pallet : pallets){
        if (pallet.getRemainingSpace() != 0){
            return false;
        }
    }
    return true;
};

std::ostream &operator<<(std::ostream& os, Shelf& s) {
    for (Pallet& pallet : s.pallets) {
        os << pallet << std::endl;
    }
    return os;
}