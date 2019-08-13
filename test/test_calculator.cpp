#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this
                          // in one cpp file
#include "catch.hpp"

// provides add_integers, subtract_integers
#include "calculator.h"

TEST_CASE("Sum two integers", "[calculator][add]") {
  REQUIRE(add_integers(2, 3) == 5);
}

TEST_CASE("Subtract two integers", "[calculator][subtract]") {
  REQUIRE(subtract_integers(2, 3) == -1);
}
