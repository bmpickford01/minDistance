#include "minDistance1.h"
#include <iostream>
#include <limits>
#include <stdlib.h>
#include <vector>
#include <time.h>
#include <cmath>

using namespace std;

vector<long int> numOperations;
vector<float> timeData;



minDistance1::minDistance1(){

}

int minDistance1::run(int arr[]){
    int length = arr[0];
    int dmin = numeric_limits<int>::max();
    for(int i = 1; i <= length; i++){
        for(int j = 1; j <= length; j++){
            if(i != j && abs(arr[i] - arr[j]) < dmin){
                dmin = abs(arr[i] - arr[j]);
            }
        }
    }
    return dmin;
}

float minDistance1::timeRun(vector<long unsigned int> array1){
    clock_t t = clock();
    t = clock();
    int n = array1.size();
    int dmin = std::numeric_limits<int>::max();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if (i != j && abs(array1[i]-array1[j]) < dmin ){
                dmin = abs(array1[i]-array1[j]);
            }
        }
    }
    t = clock() - t;
    return (((float)t)/CLOCKS_PER_SEC);
}

long unsigned int minDistance1::operationsRun(vector<long unsigned int> array1){
    long unsigned int numOperations = 0;
    int n = array1.size();
    int dmin = std::numeric_limits<int>::max();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if (i != j && abs(array1[i]-array1[j]) < dmin ){
                dmin = abs(array1[i]-array1[j]);
            }
            numOperations++;

        }
    }
    return numOperations;
}


