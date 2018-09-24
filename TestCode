#include <iostream>
#include <string>
#include <cmath>


/* main calls to a constructor in the class ---> string 'z' defined in constructor ---> PublicFunc' assigned var 'z'
 ---> 'x' defined in 'PublicFunc' and assigned to 'PrivString' variable ---> 'PrivString' is returned in GetString */
class TestClass
{
    public:
        TestClass(std::string z) // constructor. Usually used to give variable a value
        {
            PublicFunc(z);
        }
        void PublicFunc(std::string x)
        {
            PrivString = x;
        }
        std::string GetString()
        {
            return PrivString;
        }

    private:
        std::string PrivString; // defines the function and can't be accessed outside of the class until called properly
};


int main()
{
    TestClass TestObject("Test");
    TestObject.GetString();
    std::cout << std::endl << TestObject.GetString() << std::endl << std::endl;

    return 0;
}
