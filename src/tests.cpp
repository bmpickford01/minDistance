#include "minDistance1.h"
#include "minDistance2.h"
#include "tests.h"

#include <iostream>

using namespace std;


tests::tests(){

}

int tests::runTests(){
    if(!test1()){
        return -1;
    }
    if(!test2()){
        return -1;
    }
    if(!test3()){
        return -1;
    }
    if(!test4()){
        return -1;
    }
    if(!test5()){
        return -1;
    }
    if(!test6()){
        return -1;
    }
    return 1;
}

bool tests::test1(){
    int assert = 1;
    int arrSize = 5;
    string name = "Small sequential array";

    int arr[] = {arrSize, 1, 2, 3, 4, 5};

    minDistance1 * a = new minDistance1();
    minDistance2 * b = new minDistance2();

    if(a->run(arr) == assert && b->run(arr) == assert){
        std::cout << "\nTest \"" << name << "\" success\n";
        return true;
    }else {
        std::cout << "\nTest "<< name << " failed: got " << a->run(arr) << " for 1st algorithm, and " << b->run(arr) << " for 2nd, " << " needed " << assert << "\n";
    }
    return false;
}

bool tests::test2(){
    int assert = 1;
    int arrSize = 5;
    string name = "Small reverse sequential array";

    int arr[] = {arrSize, 5, 4, 3, 2, 1};

    minDistance1 * a = new minDistance1();
    minDistance2 * b = new minDistance2();

    if(a->run(arr) == assert && b->run(arr) == assert){
        std::cout << "\nTest \"" << name << "\" success\n";
        return true;
    }else {
        std::cout << "\nTest "<< name << " failed: got " << a->run(arr) << " for 1st algorithm, and " << b->run(arr) << " for 2nd, " << " needed " << assert << "\n";
    }
    return false;
}

bool tests::test3(){
    int assert = 1;
    int arrSize = 6;
    string name = "Small unordered array";

    int arr[] = {arrSize, 5, 10, 7, 6, 9, 4};

    minDistance1 * a = new minDistance1();
    minDistance2 * b = new minDistance2();

    if(a->run(arr) == assert && b->run(arr) == assert){
        std::cout << "\nTest \"" << name << "\" success\n";
        return true;
    }else {
        std::cout << "\nTest "<< name << " failed: got " << a->run(arr) << " for 1st algorithm, and " << b->run(arr) << " for 2nd, " << " needed " << assert << "\n";
    }
    return false;
}

bool tests::test4(){
    int assert = 1;
    int arrSize = 6;
    string name = "Small array with varying distances";

    int arr[] = {arrSize, 1, 4, 5, 10, 21, 50};

    minDistance1 * a = new minDistance1();
    minDistance2 * b = new minDistance2();

    if(a->run(arr) == assert && b->run(arr) == assert){
        std::cout << "\nTest \"" << name << "\" success\n";
        return true;
    }else {
        std::cout << "\nTest "<< name << " failed: got " << a->run(arr) << " for 1st algorithm, and " << b->run(arr) << " for 2nd, " << " needed " << assert << "\n";
    }
    return false;
}

bool tests::test5(){
    int assert = 3; //10 - 7
    int arrSize = 10;
    string name = "2nd Small array with varying distances";

    int arr[] = {arrSize, 1, 10, 300, 550, 321, 7, 22, 99, 10095, 77};

    minDistance1 * a = new minDistance1();
    minDistance2 * b = new minDistance2();

    if(a->run(arr) == assert && b->run(arr) == assert){
        std::cout << "\nTest \"" << name << "\" success\n";
        return true;
    }else {
        std::cout << "\nTest "<< name << " failed: got " << a->run(arr) << " for 1st algorithm, and " << b->run(arr) << " for 2nd, " << " needed " << assert << "\n";
    }
    return false;
}

bool tests::test6(){
    int assert = 100000;
    int arrSize = 6;
    string name = "Small array with large distances";

    int arr[] = {arrSize, 100, 716152221, 100100, 9909211, 541231123, 66928101};

    minDistance1 * a = new minDistance1();
    minDistance2 * b = new minDistance2();

    if(a->run(arr) == assert && b->run(arr) == assert){
        std::cout << "\nTest \"" << name << "\" success\n";
        return true;
    }else {
        std::cout << "\nTest "<< name << " failed: got " << a->run(arr) << " for 1st algorithm, and " << b->run(arr) << " for 2nd, " << " needed " << assert << "\n";
    }
    return false;
}
