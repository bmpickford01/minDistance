#include "minDistance1.h"
#include <iostream>
#include <limits>
#include <stdlib.h>

using namespace std;


minDistance1::minDistance1(){

}

int minDistance1::run(int arr[]){
    int length = arr[0];
    float dmin = numeric_limits<double>::infinity();
    for(int i = 1; i <= length; i++){
        for(int j = 1; j <= length; j++){
            //cout << (arr[i] - arr[j]) << "\n";
            if(i != j && abs(arr[i] - arr[j]) < dmin){
                //cout << "I: " << arr[i] << "J: " << arr[j];
                dmin = abs(arr[i] - arr[j]);
            }
        }
    }
    return dmin;

}
