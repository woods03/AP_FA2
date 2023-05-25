#include <iostream>
#include <string>
#include <limits>
#include "src/include/employee.hpp"
#include "src/include/pallet.hpp"
#include "src/include/warehouse.hpp"
#include "src/include/shelf.hpp"

// I thank the internet for this function :)
void waitForEnterKey() {
    std::cout << "Press Enter(twice) to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}


int main() {
    std::cout << "Welcome to the Bosch warehouse!\nToday we are showcasing how our warehouse works!" << std::endl;
    std::cout << "First of all lets create an empty warehouse and show it!\n" << std::endl;
    waitForEnterKey();
    // Create empty warehouse to show and use afterwards.
    Warehouse warehouse;
    
    // Output the warehouse information
    std::cout << warehouse << std::endl;
    waitForEnterKey();
    // lets add information to the warehouse like employees, pallets and shelves
    std::cout << "Now we will add information in our warehouse!\nFirst we add a Pallet:\n" << std::endl;
    Pallet p1("Toys", 100, 50);
    std::cout << p1 << std::endl;

    waitForEnterKey();
    // Adding pallets to add to a shelf
    Pallet p2("Books", 100, 25);
    Pallet p3("Toys", 100, 25);
    Pallet p4("Candy", 200, 150);

    Shelf Shelf1;
    Shelf1.pallets = {p1, p2, p3, p4};

    std::cout << "Now we show our shelf which contains four pallets.\n" << std::endl;
    std::cout << Shelf1 << std::endl;

    waitForEnterKey();
    // Adding employees
    std::cout << "Now we will add the information about our employees.\n" << std::endl;
    waitForEnterKey();

    Employee emp1("Tijn", true);
    Employee emp2("Kevin", true);
    Employee emp3("Vicky", false);

    // Standard employees are set busy, we want one to be false
    emp3.setBusy(false);
    std::cout << emp1 << std::endl;
    std::cout << emp2 << std::endl;
    std::cout << emp3 << std::endl;

    waitForEnterKey();
    // Now we wil add all the information to our warehouse, and add another shelf with pallets.
    std::cout << "Now we will add all information and pallets to our warehouse and show how it looks now!\n" << std::endl;
    waitForEnterKey();
    Shelf shelf2;
    Pallet p5("Beer", 100, 90);
    Pallet p6("Wine", 25, 25);
    Pallet p7("Books", 100, 50);
    Pallet p8("Toys", 100, 75);

    shelf2.pallets = {p5, p6, p7, p8};
    
    warehouse.Employees.push_back(emp1);
    warehouse.Employees.push_back(emp2);
    warehouse.Employees.push_back(emp3);

    warehouse.shelves.push_back(Shelf1);
    warehouse.shelves.push_back(shelf2);

    std::cout << warehouse << std::endl;

    // Now we will showcase our functions
    waitForEnterKey();

    // Pickitems first, to use if we want to select items out our warehouse
    std::cout << "Now we will be showcasing our warehouse functionalitys!\n" << std::endl;
    std::cout << "lets start with pickItems, which makes sure we get items we want to pick/select" << std::endl;
    std::cout << "We wil get all the books in our warehouse, which are 75!" << std::endl;

    waitForEnterKey();

    warehouse.pickItems("Books", 75);

    std::cout << warehouse << std::endl;

    std::cout << "\nAs u can see we have 0 books left in our warehouse\n" << std::endl;

    waitForEnterKey();

    std::cout << "Now that we have to empty pallets in our warehouse we can showcase 2 other functions" << std::endl;
    std::cout << "We will show the reallocatePallet function.\nAfterwards rearrange the pallets on our shelves and we will add products to some pallets\n" << std::endl;
    // Setting new products on our pallet with a new max capacity
    waitForEnterKey();

    warehouse.shelves[0].pallets[1].reallocateEmptyPallet("Beer", 100);
    warehouse.shelves[1].pallets[2].reallocateEmptyPallet("Wine", 25);

    std::cout << warehouse.shelves[0].pallets[1] << std::endl;
    std::cout << warehouse.shelves[1].pallets[2] << std::endl;

    std::cout << "\nAs u can see we changed the empty book pallets to pallets that will contain beer and wine, delicious!" << std::endl;

    waitForEnterKey();

    std::cout << "Now we will add products on every beer and wine pallet in our warehouse!\n" << std::endl;

    waitForEnterKey();

// The method i am using in this showcase to add a certain amount of items is not really efficient,
// but in the future it would be simple to implement a function in the warehouse class that can add items to a certain amount.

// Add a certain amount of items to specific pallets
int itemCount1 = 25;  // Number of items to add to shelf 0, pallet 1
int itemCount2 = 10;  // Number of items to add to shelf 1, pallet 2
int itemCount3 = 20;  // Number of items to add to shelf 1, pallet 0

while (itemCount1 > 0) {
    warehouse.shelves[0].pallets[1].putOne();
    itemCount1--;
}

while (itemCount2 > 0) {
    warehouse.shelves[1].pallets[2].putOne();
    itemCount2--;
}

while (itemCount3 > 0) {
    warehouse.shelves[1].pallets[0].putOne();
    itemCount3--;
}


std::cout << warehouse << std::endl;

std::cout << "As u can see we have added some items to the beer and wine pallets\n" << std::endl;

waitForEnterKey();

std::cout << "For our last function we will rearrange all the shelves in our warehouse\n" << std::endl;

waitForEnterKey();

warehouse.rearrangeShelf(warehouse.shelves[0]);
warehouse.rearrangeShelf(warehouse.shelves[1]);

std::cout << warehouse << std::endl;
std::cout << "\nNow all our shelves are arranged on the amount of items, so satisfying!" << std::endl;

waitForEnterKey();

std::cout << "This was the showcase of Bosch warehouse, i hope we have shown enough information en that it is helpfull about the working of the Warehouse." << std::endl;
std::cout << "\nThanks for visiting and this was the end!!" << std::endl;

    return 0;
}
