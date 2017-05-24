#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <limits>


using namespace std;
const int ArraySize = 6;
int n = ArraySize;
int dmin;
int x;
int j;
int i;
int test[ArraySize] = {1, 3, 6, 20, 27, 30};
int MinDistance(int array1[]);

int main()
{
    //srand (time(NULL));

    dmin = MinDistance(test);
    cout<<"minimum distance is "<<dmin;

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

        }

    }
    return dmin;

}
