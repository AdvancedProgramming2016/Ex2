cmake_minimum_required(VERSION 3.6)
project(Ex2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(SOURCE_FILES src/main.cpp src/Driver.cpp include/Driver.h include/MaritalStatus.h src/Vehicle.cpp include/Vehicle.h include/Manufacturer.h include/Color.h src/StandardVehicle.cpp include/StandardVehicle.h src/LuxuryVehicle.cpp include/LuxuryVehicle.h src/Passenger.cpp include/Passenger.h src/Taxi.cpp include/Taxi.h src/Trip.cpp include/Trip.h src/TaxiCenter.cpp include/TaxiCenter.h src/MainFlow.cpp include/MainFlow.h test/DriverTest.cpp test/PassengerTest.cpp test/VehicleTest.cpp test/TaxiTest.cpp test/TripTest.cpp test/TaxiCenterTest.cpp test/MainFlowTest.cpp include/ISubject.h include/IObserver.h)
add_executable(Ex2 ${SOURCE_FILES})
target_link_libraries(Ex2 gtest gtest_main)