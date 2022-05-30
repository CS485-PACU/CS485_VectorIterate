//***************************************************************************
// File name:   ExampleData.cpp
// Author:      chadd williams  
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate how to iterate through a vector
//***************************************************************************

#include "ExampleData.h"

//***************************************************************************
// Constructor: ExampleData
//
// Description: Initialized the object to the given values
//
// Parameters:  number - the number to use for mNumber
//              rcMsg - the string to use for mMsg
//
// Returned:    None
//***************************************************************************
ExampleData::ExampleData(int number, const std::string &rcMsg) : mNumber(number), mMsg(rcMsg)
{}

//***************************************************************************
// Function:    doubleData
//
// Description: return mNumber times two
//
// Parameters:  none
//
// Returned:    the doubled value
//***************************************************************************
int ExampleData::doubleData() const
{
  return mNumber * 2;
}

//***************************************************************************
// Function:    outputMessage
//
// Description: Output the object to the given stream
//
// Parameters:  rcOut - the stream to write to
//
// Returned:    None
//***************************************************************************
void ExampleData::outputMessage(std::ostream &rcOut) const
{
  rcOut << mMsg << " " << mNumber;
}