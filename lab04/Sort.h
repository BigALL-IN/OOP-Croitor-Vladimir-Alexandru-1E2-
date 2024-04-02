#pragma once
#include <vector>
#include <string>

using namespace std;
class Sort {
    vector<int> elements;
private:
    int partition(int start, int end,bool ascendent = false);
    void Quicksort2(int low, int high, bool ascendent = false);
public:

    Sort(int numElem, int min, int max);
    Sort(initializer_list<int> List);
    Sort(const vector<int>& vector, int ElemCount);
    Sort(const char* str);
    Sort(int count, ...);


    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};


