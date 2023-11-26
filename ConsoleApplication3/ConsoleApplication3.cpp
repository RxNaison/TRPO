#include <iostream>
#include "Search.h"
#include "Sort.h"
#include <ctime>

void Print(std::vector<int>& arr) {
    for (auto& i : arr)
        std::cout << i << " ";
    std::cout << "\n";
}

int main()
{
    srand(time(nullptr));

    std::vector<int> arr(20);

    for (auto& i : arr)
        i = rand() % 10;

    Print(arr);

    Sort::QuickSort(arr, 0, arr.size() - 1);
    Print(arr);

    std::cout << Search::BynarySearch(arr, 3);

    return 0;
}

