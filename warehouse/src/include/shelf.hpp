#pragma once
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <array>
#include "pallet.hpp"

class Shelf
{
private:
    std::array<Pallet, 4> Pallets;
public:
    Shelf();
    bool swapPallet(int slot1, int slot2);
};