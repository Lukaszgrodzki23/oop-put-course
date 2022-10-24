#include <iostream>

using namespace std;

class Twister{
    public:
        int numberofplayers;
        int timeinminutes;
        string startingplayer;
        Twister(int a, int b, string c){
            numberofplayers = a;
            timeinminutes = b;
            startingplayer = c;
    }

};

int main()
{
    Twister twistergame1(4,20,"John");
    cout<<twistergame1.startingplayer;
}
