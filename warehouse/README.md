# Warehouse
### Warehouse project Hogeschool utrecht, HBO-ict.
Author: Tijn van den Bosch, Klas: V1a, Studentnummer:1836020
## About
The project is focused on creating a warehouse system, named "Bosch warehouse" in this case.

The requirements are that we have 4 main features:
 - Employee management: make it to add employees to the warehouse, give these employees certain information like having a forklift certificate and if they are busy or not.

 - Shelf management: Shelves will be used to store pallets which contain products.This makes us of adding shelves,organizing them based of amount of items stored.

 - Pallet management: Pallets are used to store items, These items contain certain info like name, max amount able to be stored on the pallet and ofcourse how many are being stored at the moment. We are able to add pallets, remove/add items, and reallocating pallets.

 - Warehouse function: In the warehouse we have certain functions. First of all the warehouse contains the shelves which contain the pallets, and it contains the employees. The functions include being able to pick a certain number of products out the warehouse, adding products and rearranging the shelves. There is also acces to the subfunctions from other requirements.


The Project contains 2 parts that are runnable:
1: Main showcase: This shows all possiblities and how it works through print statements etc.
2: Testcases: This is used to validate the working during making of the program and afterwards as proof aswell.


## How to run
- First of all u will need to have C++ installed, if u do not have that yet i recommend searching online how to install.

- When installed u will need to clone the repository to your own device

- After cloning u will have to configure/build the makefile setting according to what u like to run. We do this by changing the build target, therefor we have 2 options:

1: Build target [Test]: this consists of a certain amount of testcases validating the system works and is used during the making of the program to test functions.

2: Build target [Main]: this consists of a showcase where the working and all functions will be shown as an example of how it works.

- Now u are able to run the program as normal.


#### helpfull information
When running the testcases if u would like to see a list of al testcase names which are running do the following:

1: open a gitbash terminal in Vscode.

2: Type the following command: ./testWarehouse --list-test-names-only

This will show a list of all testcases being run.

#### Sources:
- Chatgpt
- Stackoverflow
