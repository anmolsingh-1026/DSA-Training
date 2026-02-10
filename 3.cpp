#include<iostream>
using namespace std;

int main()
{
    int num = 1234;
    int reversed = 0;
    
    while(num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    
    cout << "Reversed number: " << reversed << endl;
    return 0;
}