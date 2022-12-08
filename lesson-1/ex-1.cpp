#include <iostream>

using namespace std;

class Dog{
public:
    int age;
    float weight;
    string race;
    string name;
};
class Computer{
public:
    string state;
    void turnoncomputer(){
        if (state == "off"){
            state = "on";
        }
        else{
            cout<< "computer is already on";
        }
    };
    void turnoffcomputer(){
        if (state == "on"){
            state = "off";
        }
        else{
            cout<< "computer is already off";
        }
    }
};
class Student{
public:
    Computer computer1;
    string firstname;
    string lastname;
    int age;
    string major;

private:
    int ID;
};



int main()
{
    Dog the_dog;
    the_dog.age = 5;
    the_dog.weight = 50;
    the_dog.race = "husky";
    the_dog.name = "pimpek";

    Student someone;
    someone.age = 20;
    someone.firstname = "xyz";
    someone.lastname = "abc";
    someone.major = "computer science";

    Computer computer1;
    computer1.state = "on";

    someone.computer1.turnoncomputer();

}
