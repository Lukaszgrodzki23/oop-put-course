#include <iostream>
#include <map>
#include <sstream>
#include <iomanip>
using namespace std;

class FakeCantor {
 private:
  std::map<std::string, float> rates{{"USD", 1.0366f},
                                     {"GBP", 0.87063f},
                                     {"CHF", 0.9881f},
                                     {"JPY", 145.12f}};
 public:
  FakeCantor() = default;
  float EuroToRate(const std::string &currency) {
    return rates[currency];
  };
};

class Currency {
 public:
  virtual Currency *AddedCurrency(float value, std::string currency) = 0;
  virtual Currency *SubtractedCurrency(float value, std::string currency) = 0;
  virtual std::string Abbreviation() = 0;
  virtual std::string Symbol() = 0;
  virtual std::string Balance() = 0;
  virtual float DollarExchangeRate() = 0;
};

class Euro : public Currency {
    private:
      float balance;
    
    public:
      Euro (float balance)
      {
          this->balance = balance;
      }
      Euro *AddedCurrency(float value, string currency)
      {
          Euro *b = new Euro((value * FakeCantor.EuroToRate(currency)) + this.balance);
          return b;
      }
      Euro *SubstractedCurrency(float value, string currency)
      {
          Euro *b = new Euro(this.balance - (value * FakeCantor.EuroToRate(currency)));
          return b;
      }
      string Euro Abbreviation()
      {
          return 'EUR';
      }
      string Euro Symbol()
      {
          return '€';
      }
      string Euro Balance()
      {
          return this.balance<<"€"; 
      }
      float DollarExchangeRate()
      {
          return FakeCantor.EuroToRate(currency);
      }
      
      

};

int main() {
  
  return 0;
}
