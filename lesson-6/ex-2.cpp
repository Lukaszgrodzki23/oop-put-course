#include <iostream>
#include <cmath>
using namespace std;


class Logarithm : public Number {
 private:
  double base, argument;
 public:
  double doubleValue()
  {
      try{
        if (argument < 0 || base < 0){
            throw 1;
        }
        if(argument == 0 && base == 0){
            throw 2;
        }
        if(base == 1){
            throw 3;
        }
        return log(this->argument) / log(this->base);
      }
      catch(1)
      {
          cout<<"Number does not exist";
      }
      catch(2)
      {
          cout<<"Answer is undefined";
      }
      catch(3)
      {
          cout<<"Division by zero"
      }
  }

  Logarithm(double inputBase, double inputArgument) {
    this->base = inputBase;
    this->argument = inputArgument;
  }
};
int main()
{

}
