//***************************************************************************
// File name:   ExampleData.h
// Author:      chadd williams  
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate how to iterate through a vector
//***************************************************************************

#include <string>
#include <iostream>

class ExampleData 
{
  public:
    ExampleData(int number, const std::string & rcMsg);

    int doubleData() const;
    void outputMessage(std::ostream &rcOut) const;

  private:
    int mNumber;
    std::string mMsg;
};