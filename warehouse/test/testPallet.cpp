#include "include/catch.hpp"
#include "../src/include/pallet.hpp"

TEST_CASE("Test for Pallet if constructor works"){
    Pallet p("Toys", 40, 25);
    REQUIRE(p.getItemName() == "Toys");
    REQUIRE(p.getRemainingSpace()+ p.getItemCount() == 40);
    REQUIRE(p.getItemCount() == 25);
}


TEST_CASE("Testcase for getItemName()"){
    Pallet p("Lacrosse balls", 200, 100);
    REQUIRE( p.getItemName() == "Lacrosse balls");
}

TEST_CASE("Testcase for getItemCount() and getRemainingspace()"){
    Pallet p("Toys", 90, 45);
    REQUIRE(p.getItemCount() == 45);
    REQUIRE(p.getRemainingSpace() == 45);
}

TEST_CASE("testcase for reallocateEmptyPallet(), return True if pallet == empty"){
    Pallet p("Toys", 50, 0);
    REQUIRE(p.reallocateEmptyPallet("toys", 60) == true);
}

TEST_CASE("testcase for a false reallocateEmptyPallet()"){
    Pallet p("Toys", 50, 10);
    REQUIRE(p.reallocateEmptyPallet("candy", 50) == false);
}

TEST_CASE("Testcase for takeOne()"){
    Pallet p("Toys", 25, 2);
    REQUIRE(p.takeOne() == true);
    REQUIRE(p.getItemCount() == 1);
}

TEST_CASE("Testcase for a failed takeOne()"){
    Pallet p("Toys", 20, 0);
    REQUIRE(p.takeOne() == false);
}

TEST_CASE("Testcase for succesfull putOne()"){
    Pallet p("Games", 20, 19);
    REQUIRE(p.putOne() == true);
    REQUIRE(p.getItemCount() == 20);
}

TEST_CASE("Testcase for a failed putOne()"){
    Pallet p("Games", 20, 20);
    REQUIRE(p.putOne() == false);
}

TEST_CASE("Testcase for succesfull isEmpty()"){
    Pallet p("Games", 20, 0);
    REQUIRE(p.isEmpty() == true);
}

TEST_CASE("Testcase for failling isEmpty()"){
    Pallet p("Games", 20, 5);
    REQUIRE(p.isEmpty() == false);
}

TEST_CASE("Testcase for succesfull isFull()"){
    Pallet p("Games", 20, 20);
    REQUIRE(p.isFull() == true);
}

TEST_CASE("Testcase for failling isfull()"){
    Pallet p("Games", 20, 19);
    REQUIRE(p.isFull() == false);
}