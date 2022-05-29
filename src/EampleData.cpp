#include "ExampleData.h"

ExampleData::ExampleData(int number, const std::string &rcMsg) : mNumber(number), mMsg(rcMsg)
{}

int ExampleData::doubleData() const
{
  return mNumber * 2;
}

void ExampleData::outputMessage(std::ostream &rcOut) const
{
  rcOut << mMsg << " " << mNumber;
}