// arr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "array.h"
#include "macros.h"
int main()
{
    int Values[18] = { 50,76,21,4,32,21,15,50,0,14,100,83,0,2,3,70,87,80 };
    // load array
    CArray<int> a(18);
    for (int i = 0; i < 18; ++i) {
        a.setArray(i, Values[i]);
    }
    a.dumpArray();
    std::cout << "Move zeros to end array\n";
    int numberOfZeros = a.moveZerosToEnd();
    std::cout << numberOfZeros << " zeros found in array\n";
    a.dumpArray();
    std::cout << "Sort array\n";
    a.Sort();
    a.dumpArray();
    std::cout << "Reverse array\n";
    a.reverseArray();
    a.dumpArray();
    // string array
    std::string ValuesStr[16] = { "one","two","three","johnny","joey","jerry","joanne","bob","boris","butthead","beavis","ann","robbie","derek","donald","nathan" };
    // load array
    CArray<std::string> astr(16);
    for (int i = 0; i < 16; ++i) {
        astr.setArray(i, ValuesStr[i]);
    }
    astr.dumpArray();
    std::cout << "Sort array\n";
    astr.bubbleSort();
    astr.dumpArray();
    std::cout << "Reverse array\n";
    astr.reverseArray();
    astr.dumpArray();

#if _DEBUG
    _CrtDumpMemoryLeaks();
#endif
}