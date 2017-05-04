#include "minDistance1.h"
#include <iostream>
#include <limits>
#include <stdlib.h>

using namespace std;


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
