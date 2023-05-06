#include <iostream>
using namespace std;

class Demo
{
public:
    int A;
    int B;

    // Parametrised constructor with default arguments
    Demo(int i = 10, int j = 20)
    {
        A = i;
        B = j;
    }
};

int main()
{

    return 0;
}