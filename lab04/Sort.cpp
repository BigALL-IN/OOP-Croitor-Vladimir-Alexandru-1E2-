#include "Sort.h"
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdarg>


Sort::Sort(int numElem, int min, int max) {
    for (int i = 0; i < numElem;i++) {
        elements.push_back(rand() % (max - min + 1) + min);
    }
}

Sort::Sort(initializer_list<int> List) : elements(List) {}

Sort::Sort(const vector<int>& vector, int elemCount) {
    elements.reserve(elemCount);
    for (int i = 0; i < elemCount; i++) {
        elements.push_back(vector[i]);
    }
}

Sort::Sort(const char* str) {
    stringstream ss(str);
    int num;
    while (ss >> num) {
        elements.push_back(num);
        if (ss.peek() == ',')
            ss.ignore();
    }
}

Sort::Sort(int count, ...) {
    va_list list;
    va_start(list, count);
    for (int i = 0; i < count; ++i) {
        int num = va_arg(list, int);
        elements.push_back(num);
    }
    va_end(list);
}

int Sort::GetElementsCount() {
    return elements.size();
}

int Sort::GetElementFromIndex(int index) {
    if (index >= 0 && index < elements.size())
        return elements[index];
    else
        return -1;
}

void Sort::InsertSort(bool ascendent) {
        for (int i = 1; i < elements.size(); ++i) {
            int key = elements[i];
            int j = i - 1;
            if (ascendent) { 
                bool condition = (j >= 0 && elements[j] > key);
            };
            if (!ascendent) {
                bool condition = (j >= 0 && elements[j] < key);
            };
            while (j >= 0 && elements[j] > key) {
                elements[j + 1] = elements[j];
                j = j - 1;
            }
            elements[j + 1] = key;
        }
        
}

int Sort::partition(int start, int end, bool ascendent) {
    int pivot = elements[end];  
    int i = start - 1;  
    for (int j = start; j < end; j++) {
        
        if ((ascendent && elements[j] <= pivot) || (!ascendent && elements[j] >= pivot)) {
            i++;  
            swap(elements[i], elements[j]);  
        }
    }
    swap(elements[i + 1], elements[end]);  
    return i + 1; 
}

void Sort::Quicksort2(int start, int end, bool ascendent) {
    if (start < end) {

        int pi = partition(start, end, ascendent);
        Quicksort2(start, pi - 1, ascendent);
        Quicksort2(pi + 1, end, ascendent);
    }
}

void Sort::QuickSort(bool ascendent) {
    Quicksort2(0, elements.size() - 1, ascendent);
}

void Sort::BubbleSort(bool ascendent) {
    int n = elements.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((ascendent && elements[j] > elements[j + 1]) || (!ascendent && elements[j] < elements[j + 1])) {
                swap(elements[j], elements[j + 1]);
            }
        }
    }
}

void Sort::Print()  {
    for (int num : elements) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}



