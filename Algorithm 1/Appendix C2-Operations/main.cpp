#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <limits>


using namespace std;
const int ArraySize = 400;
int n = ArraySize;
int dmin;
int x;
int j;
int i;
int a;
long long int numOperations = 0;
int test[ArraySize] = {};
int MinDistance(int array1[]);

int main()
{
    srand (time(NULL));

    for(a=0; a<99; a++)
    {

    for(x=0; x<n; x++)
    {
        test[x] = rand() % (1000);
    }
    dmin = MinDistance(test);
    }
    cout<<" Average number of basic operations is "<<numOperations/100;

}

int MinDistance(int array1[])
{
    int dmin = std::numeric_limits<int>::max();
    for(i=0; i<n; i++)
    {

        for(j=0; j<n; j++)
        {
            if (i != j && abs(array1[i]-array1[j]) < dmin ){
                dmin = abs(array1[i]-array1[j]);

            }
            numOperations++;


        }

    }
    return dmin;

}
