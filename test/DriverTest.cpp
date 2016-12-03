#include "gtest/gtest.h"
#include "../include/Driver.h"

class DriverTest : public ::testing::Test {
protected:
    Driver driver;

    virtual void SetUp() {

    }

    virtual void TearDown() {
    }

public:
    DriverTest() : driver(1, 45, MaritalStatus::MARRIED, 20) {}
};

/*
 * Checks the basic driver functionality.
 */
TEST_F(DriverTest, basicTest) {

    unsigned initialExp = 0;
    unsigned postExp = 0;

    initialExp = driver.getYearsOfExperience();
    driver.increaseExperience();
    postExp = driver.getYearsOfExperience();

    ASSERT_EQ(initialExp + 1, postExp); // check that the experience increased by one.

    //TODO add check for update method
}


