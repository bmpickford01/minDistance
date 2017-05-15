#include "minDistance2Output.h"
#include "minDistance2.h"
#include <vector>
#include <time.h>
#include <math.h>
#include <fstream>
#include <algorithm>
#include <random>
#include <iostream>


minDistance2Output::minDistance2Output(){
    runOperations();
//    //runOperations();
//    long int operations;
//    vector<long int> arr;
//    for(int a = 0; a < 10; a++){
//        arr.push_back(a);
//        cout << a << "\n";
//    }
//    cout << "arr " << arr[0] << "\n";
//    minDistance2 * m = new minDistance2();
//    operations = m->operationsRun(arr);
//
//    cout << "num operations: " << operations;
}

void minDistance2Output::runTime(){
    cout << "\n Starting to count run time... \n";
    float time;
    vector<int> arrCount; //For ease of reading in CSV, size of each array iterated
    vector<float> timeData;
    int startLength = 0;
    int jump = 1000;
    int iterations = 10;
    int numJumps = 50 * jump;

    for(int i = startLength; i < numJumps; i = i + jump){
        arrCount.push_back(i);
        for(int j = 0; j < iterations; j++){
            vector<long unsigned int> arr = createArr(i);
            minDistance2 * m = new minDistance2();
            time += m->timeRun(arr);
        }
        timeData.push_back(time / iterations);
        cout << "\n Array size " <<  i << " computed with average time: " << (time/iterations) << " seconds\n";
    }

    cout << "\n Writing to file... \n";
    ofstream file;
    file.open("timeData.csv");
    file << "Array Size, Time\n";

    for(int i = 0; i < timeData.size();i++){
        file << arrCount[i] << ",";
        file << float(timeData[i]) << "\n";
    }
    file << "\n";
    file.close();
    cout << "\n Done! \n";

}

void minDistance2Output::runOperations(){
    cout << "\n Starting to count number of operations... \n";
    long unsigned int operations = 0;
    vector<int> arrCount; //For ease of reading in CSV, size of each array iterated
    vector<long unsigned int> operationData;
    int startLength = 0;
    int jump = 100;
    int iterations = 10;
    int numJumps = 50 * jump;

    for(int i = startLength; i < numJumps; i = i + jump){
        arrCount.push_back(i);
        for(int j = 0; j < iterations; j++){
            vector<long unsigned int> arr = createArr(i);
            minDistance2 * m = new minDistance2();
            operations += m->operationsRun(arr);
        }
        operationData.push_back(operations / iterations);
        cout << "\n Array size " <<  i << " computed with average number of operations: " << (operations/iterations) << "\n";
    }

    cout << "\n Writing to file... \n";
    ofstream file;
    file.open("operationData.csv");
    file << "Array Size, Num Operations, cubed, squared\n";

    for(int i = 0; i < operationData.size();i++){
        long unsigned int e = (arrCount[i] - 1) * (arrCount[i] - 1);
        long unsigned int e2 = (arrCount[i] - 1) * (arrCount[i] - 1) * (arrCount[i] - 1);
        file << arrCount[i] << ",";
        file << operationData[i] << ",";
        file << e2 << ",";
        file << e << "\n";
    }
    file << "\n";
    file.close();
    cout << "\n Done! \n";
}

vector<long unsigned int> minDistance2Output::createArr(int length){
    int arr[length];
    random_device rd;
    default_random_engine dre(rd());
    uniform_int_distribution<int> uid(0,length);

    generate(arr, arr + sizeof(arr) / sizeof(int), [&] () { return uid(dre); });
    //counted++;
    //cout << "Generated array: " << counted << "\n";

    vector<long unsigned int> returnArr (arr, arr + sizeof(arr) / sizeof(arr[0]) );

    return returnArr;
}
