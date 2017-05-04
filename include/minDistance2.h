#ifndef MINDISTANCE2_H
#define MINDISTANCE2_H
#include <vector>

using namespace std;


class minDistance2{
    public:
        minDistance2();
        int run(int arr[]);
        float timeRun(int arr[]);
        long int operationsRun(int arr[]);
        void addTime(float time);
        void addOperations(long int n);
        vector<float> getTimes();
        vector<long int> getOperations();

    protected:

    private:
};

#endif // MINDISTANCE2_H
