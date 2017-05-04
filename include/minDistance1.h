#ifndef MINDISTANCE1_H
#define MINDISTANCE1_H
#include <vector>

using namespace std;


class minDistance1{
    public:
        minDistance1();
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

#endif // MINDISTANCE_H
