
#include <iostream>
using namespace std;

int main() 
{
    int a, b, lcm;

    cout <<"Enter two numbers:";
    cin >>a>>b;

    int max = (a>b) ? a:b;

    while (true)
     {
        if (max % a == 0 && max % b == 0) 
        {
            lcm = max;
            break;
        }
        max++;
    }

    cout <<"LCM of "<< a << "and" << b <<"is"<< lcm;

    return 0;
}