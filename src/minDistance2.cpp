#include "minDistance2.h"
#include <iostream>
#include <limits>

using namespace std;


minDistance2::minDistance2(){

}

int minDistance2::run(int arr[]){
    int length = arr[0];
    float dmin = numeric_limits<double>::infinity();
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
