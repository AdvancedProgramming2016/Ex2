#include "gtest/gtest.h"
#include "../include/Passenger.h"

class PassengerTest : public ::testing::Test {
protected:
    Passenger passenger;

    virtual void SetUp() {
        passenger = Passenger(Point(0,0), Point(2,2));
    }

    virtual void TearDown() {
    }

};

/*
 * Test that the passenger generates a valid satisfaction rate.
 */
TEST_F(PassengerTest, checkPassenger){

    int value;

    value = passenger.generateSatisfaction();

    ASSERT_GT(value, 5); // check that the satisfaction isn't higher than 5.
    ASSERT_LT(value, 1); // check that the satisfaction isn't lower than 1.
}

