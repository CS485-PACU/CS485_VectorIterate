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