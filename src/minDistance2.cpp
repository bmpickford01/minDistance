#include "minDistance2.h"
#include <iostream>
#include <limits>

using namespace std;


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
