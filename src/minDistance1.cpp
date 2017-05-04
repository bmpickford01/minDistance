#include "minDistance1.h"
#include <iostream>
#include <limits>
#include <stdlib.h>
#include <vector>
#include <time.h>

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

float minDistance1::timeRun(int arr[]){
    clock_t t = clock();
    t = clock();
    int length = arr[0];
    int dmin = numeric_limits<int>::max();
    for(int i = 1; i <= length; i++){
        for(int j = 1; j <= length; j++){
            if(i != j && abs(arr[i] - arr[j]) < dmin){
                dmin = abs(arr[i] - arr[j]);
            }
        }
    }
    t = clock() - t;
    return (((float)t)/CLOCKS_PER_SEC);
}

long int minDistance1::operationsRun(int arr[]){
    long int n;
    int length = arr[0];
    int dmin = numeric_limits<int>::max();
    for(int i = 1; i <= length; i++){
        for(int j = 1; j <= length; j++){
            if(i != j && abs(arr[i] - arr[j]) < dmin){
                n++; //Maybe not here???
                dmin = abs(arr[i] - arr[j]);
            }
        }
    }
    return n;
}

void minDistance1::addTime(float time){
    timeData.push_back(time);
}

void minDistance1::addOperations(long int n){
    numOperations.push_back(n);
}


vector<float> minDistance1::getTimes(){
    return timeData;
}

vector<long int> minDistance1::getOperations(){
    return numOperations;
}

