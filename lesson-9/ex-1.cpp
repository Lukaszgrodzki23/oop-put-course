#include <string>
#include <iostream>


class Game {
 public:
  virtual std::string result() = 0;
};

class FakeFootballGame : public Game {
 public:
  std::string result(){
    return "fake score";
  }
};

int main() {
  FakeFootballGame game;
  actualScore = 1:1;
  if (game == actualScore){
    std::cout >> "Test passed";
  }
  else{
    std::cout >> "Test failed";
}
