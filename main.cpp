#include <iostream>

#include "minDistance1.h"
#include "minDistance2.h"
#include "tests.h"



using namespace std;

int main()
{
    tests * a = new tests();
    if(a->runTests() == 1){
        cout << "\nTests completed successfully\n\n";
    } else {
        cout << "\nTests failed\n\n";
    }
}
