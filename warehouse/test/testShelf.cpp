#include <iostream>
#include "./include/catch.hpp"
#include "../src/include/shelf.hpp"

TEST_CASE("Testcase for default Shelf, 4 pallets in the shelf each empty"){
    Shelf s;
    REQUIRE(s.pallets[3].getItemName() == "");
    REQUIRE(s.pallets[3].getItemCount() == 0);
    REQUIRE(s.pallets[3].getRemainingSpace() == 0);

    REQUIRE(s.pallets[3].getItemName() == "");
    REQUIRE(s.pallets[3].getItemCount() == 0);
    REQUIRE(s.pallets[3].getRemainingSpace() == 0);

    REQUIRE(s.pallets[3].getItemName() == "");
    REQUIRE(s.pallets[3].getItemCount() == 0);
    REQUIRE(s.pallets[3].getRemainingSpace() == 0);

    REQUIRE(s.pallets[3].getItemName() == "");
    REQUIRE(s.pallets[3].getItemCount() == 0);
    REQUIRE(s.pallets[3].getRemainingSpace() == 0);
}


TEST_CASE("Testcase for a succesfull swapPallet()"){
    Shelf s;
    s.pallets={
        Pallet("Books", 20, 10),
        Pallet("Toys", 20, 9),
        Pallet("Books", 25, 15),
        Pallet("Candy", 100, 70), 
    };

    REQUIRE(s.swapPallet(0, 1) == true);
    REQUIRE(s.pallets[0].getItemCount() == 9);
    REQUIRE(s.pallets[1].getItemCount() == 10);
}

TEST_CASE("Testcase for a failed swapPallet()"){
    Shelf s;
    s.pallets = {
        Pallet("Books", 20, 10),
        Pallet("Toys", 20, 15),
        Pallet("Balls", 20, 14),
        Pallet("Books", 20, 9),
    };
    REQUIRE(s.swapPallet(2, 1) == false);
    REQUIRE(s.pallets[1].getItemCount() == 15);
    REQUIRE(s.pallets[2].getItemCount() == 14);
}

TEST_CASE("Testcase for succesfull shelf isEmpty()"){
    Shelf s;
    s.pallets = {
        Pallet("Books", 20, 0),
        Pallet("Toys", 20, 0),
        Pallet("Balls", 20, 0),
        Pallet("Books", 20, 0),
    };

    REQUIRE(s.isEmpty() == true);
}

TEST_CASE("Testcase for failed shelf isEmpty()"){
    Shelf s;
    s.pallets = {
        Pallet("Books", 20, 4),
        Pallet("Toys", 20, 5),
        Pallet("Balls", 20, 6),
        Pallet("Books", 20, 6),
    };
    REQUIRE(s.isEmpty() == false);
}

TEST_CASE("Testcase for succesfull shelf isFull()"){
    Shelf s;
    s.pallets = {
        Pallet("Books", 10, 10),
        Pallet("Toys", 10, 10),
        Pallet("Games", 10, 10),
        Pallet("Books", 10, 10),
    };
    REQUIRE(s.isFull() == true);
}

TEST_CASE("Testcase for failed shelf isfull()"){
    Shelf s;
    s.pallets = {
        Pallet("Books", 10, 5),
        Pallet("Candy", 10, 4),
        Pallet("Books", 10, 0),
        Pallet("Toys", 10, 3),
    };
    REQUIRE(s.isFull() == false);
}