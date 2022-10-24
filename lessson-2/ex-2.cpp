#include <iostream>

using namespace std;
//twister rug
class Rug{
    public:
        float width;
        float length;
        string paint;
        Rug(float a, float b, string c){
            width = a;
            length = b;
            paint = c;
        };
        string colour(){
            return paint;
            };
        void changewidth(float a){
            width = a;
            };
    };

int main()
{
    Rug rug1(10,10,"brown");
    cout<<rug1.width<<endl;
    rug1.changewidth(20.0);
    cout<<rug1.width<<endl;
}
