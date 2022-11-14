#include <iostream>

using namespace std;

class Container
{
public:
    virtual int capacityleft() = 0;
};

class Pool: public Container
{
private:
    int amountoffluid;
public:
    Pool fillpool(int fluidtoadd)
    {
        return Pool (amountoffluid - fluidtoadd);
    }
    int capacityleft()
    {
        return  capacityleft() - amountoffluid;
    }
    Pool (int amountoffluid)
    {
        this->amountoffluid = amountoffluid;
    }
};


int main()
{
    Pool emptypool(0);
    Pool fullpool = emptypool.fillpool(100);
    cout<<fullpool.capacityleft();
}
