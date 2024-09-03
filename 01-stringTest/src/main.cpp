#include <iostream>
#include "stringtest.h"
using namespace std;


int main()
{
    StringTest* strTest = new StringTest();
    strTest->createStringTest();
    delete strTest;
    return 0;
}
