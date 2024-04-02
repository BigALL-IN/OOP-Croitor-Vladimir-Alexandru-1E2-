#include "Sort.h"
#include <iostream>

void main() {

    Sort sort1(7, 1, 50);
    cout << "Random elements: ";
    sort1.Print();

    Sort sort2 = { 3, 4, 9, 2, 8, 7 };
    cout << "Initializer list elements: ";
    sort2.Print();

    vector<int> vec = { 3, 5, 8, 9, 4 };
    Sort sort3(vec, 5);
    cout << "Vector elements: ";
    sort3.Print();

    Sort sort4("10, 7, 9, 2, ");
    cout << "String elements: ";
    sort4.Print();

    Sort sort5(6, 12, 4, 8, 2, 6, 1);
    cout << "Variable arguments elements: ";
    sort5.Print();

    Sort sort6 = { 13, 20, 14, 6, 7, 9 };
    cout << "Before sorting: ";
    sort6.Print();

    cout << "After QuickSort (ascending): ";
    sort6.QuickSort(true);
    sort6.Print();

    cout << "After BubbleSort (descending): ";
    sort6.BubbleSort(false);
    sort6.Print();

    cout << "Total elements: " << sort6.GetElementsCount() << std::endl;
    cout << "Element at index 2: " << sort6.GetElementFromIndex(2) << std::endl;

}