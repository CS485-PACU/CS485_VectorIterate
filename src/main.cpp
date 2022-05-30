//***************************************************************************
// File name:   main.cpp
// Author:      chadd williams  
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate how to iterate through a vector
//***************************************************************************

#include <iostream>
#include <vector> 
#include <string>
#include "ExampleData.h"
#include <algorithm>

//***************************************************************************
// Function:    main
//
// Description: Iterator through vectors in various ways
//
// Parameters:  none
//
// Returned:    EXIT_SUCCESS
//***************************************************************************
int main()
{
    std::vector<int> cVecInts = {1,2,3,4,5};
    std::vector<int> cVecNewInts;
    std::vector<ExampleData> cVecData = {ExampleData(1,"a"), ExampleData(2,"b"), ExampleData(3,"c")};


    std::cout << "Old Style for with int index:" << std::endl;
    // old style for with int index
    for ( int i = 0; i < cVecData.size() ; ++i )
    {
        std::cout << cVecInts[i] << std::endl;
    }

    // for (auto it = vec.begin() ; it != vec.end(); ++it) {it->work();} 
    std::cout << "For with iterator" << std::endl;
    for( auto iter = cVecData.begin() ; iter != cVecData.end(); ++iter)
    {
        iter->outputMessage(std::cout); // iter is a pointer
        std::cout << std::endl;
    }

    // range base
    // for(auto it : vec) { it.work(); }
    std::cout << "Range Based For" << std::endl;
    for(auto &iter : cVecInts)  // auto &iter -- iter is a reference (mutable)
    {
        std::cout << iter << std::endl; // iter is an object
        iter *= 3;
    }

    // std::for_each(vec.begin, vec.end(), [](auto &rData) { rData->work();});
    std::cout << "For each" << std::endl;
    std::for_each(cVecInts.begin(), cVecInts.end(), [](auto &rData) { std::cout << rData << std::endl;});

    // C++20
    // std::ranges::for_each(vec, [](const auto &rPiece) {std::cout << rPiece;}, [](const auto& rData) { return rData.doubleData(); } ;
    std::cout << "For each over range" << std::endl;
    std::ranges::for_each(cVecData, [](const auto &rData) {std::cout << rData << std::endl;},
         [](const auto& rData) { return rData.doubleData(); } );

    // std::transform
    // std::transform(vec.begin(), vec.end(), vec.begin(), [](auto &rData) { return rData * 2;} );
    std::cout << "Transform a vector" << std::endl;
    std::transform(cVecInts.begin(), cVecInts.end(), cVecInts.begin(), [](auto &rData) { return rData * 2;} );
    std::for_each(cVecInts.begin(), cVecInts.end(), [](auto &rData) { std::cout << rData << std::endl;});

    // std::transform(vec.begin(), vec.end(), vecNew.begin(), [](auto &rData) { return rData * 2} );
    std::cout << "Transform a vector, copy to new vector" << std::endl;
    std::transform(cVecInts.begin(), cVecInts.end(), std::back_inserter(cVecNewInts), [](auto &rData) { return rData * 2;} );
    std::for_each(cVecInts.begin(), cVecInts.end(), [](auto &rData) { std::cout << rData << std::endl;});
    std::cout << "cVecNewInts" << std::endl;
    std::for_each(cVecNewInts.begin(), cVecNewInts.end(), [](auto &rData) { std::cout << rData << std::endl;});
    
    return EXIT_SUCCESS;
}
