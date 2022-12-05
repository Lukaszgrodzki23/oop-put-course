#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
class Solution
{
public:
    int answer()
        {
        string i;
        int maxi = 0;
        int sum = 0;
        string line;
        fstream file;
        file.open("testcase.txt", ios::in | ios::out);
        if (file.good())
        {
            while(!file.eof())
            {
                getline(file, line);
                i = line;
                if (i == "")
                {
                    if (sum > maxi)
                    {
                        maxi = sum;
                    }
                    sum = 0;
                }
            int temp = atoi(i.c_str());
            sum += temp;
            }
            return maxi;
        }
        else
        {
            return -1;
        }
        }
};




int main()
{
    Solution solution1;
    cout<<solution1.answer();
}
