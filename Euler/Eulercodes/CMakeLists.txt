cmake_minimum_required(VERSION 3.17)
project(Eulercodes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Eulercodes
        fibonacci.cpp
        fibonacci.h
        highlytriangle.cpp
        highlytriangle.h
        isprime.cpp
        isprime.h
        largestingrid.cpp
        largestingrid.h
        largestpalindrome.cpp
        largestpalindrome.h
        largestproduct.cpp
        largestproduct.h
        largesum.cpp
        largesum.h
        lastprime.cpp
        lastprime.h
        main.cpp
        Multiples5and3.cpp
        multiples5and3.h
        "Pythagorean triplet.cpp"
        pythagorean.h
        smallestmultiple.cpp
        smallestmultiple.h
        sumofprimes.cpp
        sumofprimes.h
        sumsquaredifference.cpp
        sumsquaredifference.h
        Xprime.cpp
        xprime.h)
