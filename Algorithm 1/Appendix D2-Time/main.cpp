#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <limits>
#include <iomanip>


using namespace std;
const int ArraySize = 9900;
int n = ArraySize;
int dmin;
int x;
int a;
int j;
int i;
int test[ArraySize] = {};
int MinDistance(int array1[]);

int main()
{
    clock_t total_clocks = 0;
    srand (time(NULL));

    for(a=0; a<1000; a++)
    {

    for(x=0; x<n; x++)
    {
        test[x] = rand() % (1000);
    }
    clock_t start_clock = clock();
    dmin = MinDistance(test);

    // Record the value of the clock after running the algorithm.
        total_clocks += clock() - start_clock;

}
// Calculate the difference in time, and convert it to milliseconds.
    double elapsed_time = (total_clocks / (float)n) / double(CLOCKS_PER_SEC);

    cout << "Average time to search an array of length " << n << " was "
         << fixed << setprecision(5) << elapsed_time << " ms." << endl;

    return 0;

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
