#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int PntrsEx();

int main()
{
    PntrsEx();
    
    return 0;
}

int PntrsEx()
{
    // example 1:
    int x = 25;
    int* p = &x; // '*p' is an alias for 'x'
    cout << endl << p << endl << endl; // &var is used to find the address of a variable. In this case we are finding the address of 'x'
    cout << *p << endl << endl; // *var is used to get the value of the address held by the pointer, in this case 'p' is the pointer

    // example 2:
    int Score = 5;
    int* ScorePtr = &Score; // the pointer 'ScorePtr' is assigned the address/memory allocation of 'Score' (&Score)
    cout << ScorePtr << endl << endl; // the pointer is printed

    return 0;
}
