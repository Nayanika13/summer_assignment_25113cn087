#include <iostream>
#include <vector>
using namespace std;

int missingnum(vector<int>& arr, int n) 
{
    int sum= n*(n + 1)/2;
    
    int realsum= 0;
    for (int num:arr) 
    {
        realsum+=num;
    }
    
    return sum-realsum;
}

int main() 
{
    vector<int> arr={1, 2, 3, 5};
    int n = 5;

    cout<<"Missing number:" << missingnum(arr, n) << endl;

    return 0;
}