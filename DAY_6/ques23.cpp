

#include <iostream>
using namespace std;

int main()
 {
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int count=0;
    while(n>0) 
    {
        count +=(n & 1); 
        n >>=1;  
    }
    cout <<"Number of set bits =" << count<<endl;
    return 0;
}