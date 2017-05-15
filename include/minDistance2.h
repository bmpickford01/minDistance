#ifndef MINDISTANCE2_H
#define MINDISTANCE2_H
#include <vector>

using namespace std;


class minDistance2{
    public:
        minDistance2();
        int run(int arr[]);
        float timeRun(vector<long unsigned int> arr);
        long unsigned int operationsRun(vector<long unsigned int> arr);
        void addTime(float time);
        void addOperations(long unsigned int n);
        vector<float> getTimes();
        vector<long int> getOperations();

    protected:

    private:
};

#endif // MINDISTANCE2_H
