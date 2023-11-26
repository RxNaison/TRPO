#include <iostream>
#include "Search.h"
#include <ctime>

int main()
{
    srand(time(nullptr));

    std::vector<int> arr(20);

    for (auto& i : arr)
        i = rand() % 10;

}

