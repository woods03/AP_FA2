#include "include/catch.hpp"
#include "../src/include/employee.hpp"


TEST_CASE("Test Employee if it returns good name and certificate bool") {
    Employee e("Andre", true);
    REQUIRE(e.getName() == "Andre");
    REQUIRE(e.getForkliftCertificate() == true);
}

TEST_CASE("Test Employee with false bool forkliftcertificate"){
    Employee e("Maxwell", false);
    REQUIRE(e.getName() == "Maxwell");
    REQUIRE(e.getForkliftCertificate() == false);
}

TEST_CASE("Test if getName returns manuel") {
    Employee e("Manuel", true);
    REQUIRE(e.getName() == "Manuel");
}

TEST_CASE("Test if setBusy returns true") {
    Employee e("Manuel", true);
    e.setBusy(true);
    REQUIRE(e.getBusy() == true);
}

TEST_CASE("Test if getForkliftCertificate returns true") {
    Employee e("Tijn", true);
    REQUIRE(e.getForkliftCertificate() == true);
}

TEST_CASE("Test if setForkliftCertificate works and returns false after first being true") {
    Employee e("Avina", true);
    e.setForkliftCertificate(false);
    REQUIRE(e.getForkliftCertificate() == false);
}