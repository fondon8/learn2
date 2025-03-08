#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "Hello, world, from dmc" << endl;
    cout << "largest float = " << numeric_limits<float>::max() << endl;
    cout << "char is signed == " << numeric_limits<char>::is_signed << '\n';
}
