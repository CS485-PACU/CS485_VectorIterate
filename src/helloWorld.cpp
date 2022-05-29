#include <iostream>
#include <vector> 
#include <string>
#include "ExampleData.h"

int main()
{
    std::vector<int> cVecInts = {1,2,3,4,5};
    std::vector<ExampleData> cVecData = {ExampleData(1,"a"), ExampleData(2,"b"), ExampleData(3,"c")};


    //for int index

    // for (auto it = vec.begin() ; it != vec.end(); ++it) {it->work();} 
    
    // range base
    // for(auto it : vec) { it->work(); }

    // std::for_each(vec.begin, vec.end(), [](auto &rData) { rData->work();});

    // C++20
    // std::for_each(vec, [](auto &rPiece) {std::cout << rPiece;}, [](const auto& rData) { return rData.doubleData(); } ;


    // std::transform
    // std::transform(vec.begin(), vec.end(), vec.begin(), [](auto &rData) { return rData * 2} );
    
    // std::transform(vec.begin(), vec.end(), vecNew.begin(), [](auto &rData) { return rData * 2} );
    
    return EXIT_SUCCESS;
}
