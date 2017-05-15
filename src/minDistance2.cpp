#include "minDistance2.h"
#include <iostream>
#include <limits>
#include <vector>
#include <time.h>
#include <cmath>

using namespace std;

vector<long int> numOperations2;
vector<float> timeData2;

minDistance2::minDistance2(){

}

int minDistance2::run(int arr[]){
    int length = arr[0];
    int dmin = numeric_limits<int>::max();
    int temp = 0;
    for(int i = 1; i <= length - 1; i++){
        for(int j = i+1; j <= length; j++){
            temp = abs(arr[i] - arr[j]);
            if(temp < dmin){
                dmin = temp;
            }
        }
    }
    return dmin;
}


float minDistance2::timeRun(vector<long unsigned int> arr){
    clock_t t = clock();
    t = clock();
    int length = arr.size();
    int dmin = numeric_limits<int>::max();
    long long int temp = 0;
    for(int i = 1; i <= length - 1; i++){
        for(int j = i+1; j <= length; j++){
            temp = abs(arr[i] - arr[j]);
            if(temp < dmin){
                dmin = temp;
            }
        }
    }
    t = clock() - t;
    return (((float)t)/CLOCKS_PER_SEC);
}

long unsigned int minDistance2::operationsRun(vector<long unsigned int> arr){
    long unsigned int n = 0;
    int length = arr.size();
    int dmin = numeric_limits<int>::max();
    long unsigned int temp = 0;
    for(int i = 0; i <= length - 1; i++){
        for(int j = i+1; j <= length; j++){
            temp = abs(arr[i] - arr[j]);
            if(temp < dmin){
                n++; //maybe?
                dmin = temp;
            }
        }
    }
    return n;
}

void minDistance2::addTime(float time){
    timeData2.push_back(time);
}

void minDistance2::addOperations(long unsigned int n){
    numOperations2.push_back(n);
}

vector<float> minDistance2::getTimes(){
    return timeData2;
}

vector<long int> minDistance2::getOperations(){
    return numOperations2;
}

