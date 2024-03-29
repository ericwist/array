// main.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include "array.h"
int main()
{
    int Values[20] = { 50,76,21,4,32,21,15,50,0,14,100,83,0,2,3,70,87,80,0,22 };
    // load array
    CArray<int> a(20);
    for (int i = 0; i < 20; ++i) {
        a.setArray(i, Values[i]);
    }
    a.dumpArray();
    cout << "Reverse array" << endl;
    a.reverseArray();
    a.dumpArray();
    cout << "Move zeros to beginning of array" << endl;
    int numberOfZeros = a.moveZerosToBeginning();
    cout << numberOfZeros << " zeros found in array" << endl;
    a.dumpArray();
    cout << "Move zeros to end array" << endl;
    numberOfZeros = a.moveZerosToEnd();
    cout << numberOfZeros << " zeros found in array" << endl;
    a.dumpArray();
    cout << "Sort array ascending" << endl;
    a.Sort();
    a.dumpArray();
    cout << "Sort array descending" << endl;
    a.dSort();
    a.dumpArray();
    cout << "press any key to continue" << endl;
    int err = getchar();
    if (err == -1) return err;
    cout << endl;

    // string array
    string ValuesStr[16] = { "one","two","three","johnny","joey","jerry","joanne","bob","boris","butthead","beavis","ann","robbie","derek","donald","nathan" };
    // load array
    CArray<string> astr(16);
    for (int i = 0; i < 16; ++i) {
        astr.setArray(i, ValuesStr[i]);
    }
    astr.dumpArray();
    cout << "Reverse array" << endl;
    astr.reverseArray();
    astr.dumpArray();
    cout << "Sort array ascending" << endl;
    astr.Sort();
    astr.dumpArray();
    cout << "Sort array descending" << endl;
    astr.dSort();
    astr.dumpArray();
    cout << "press any key to continue" << endl;
    int err2 = getchar();
    if (err2 == -1) return err2;
    cout << endl;

    double ValueDbl[12] = { 10.20,0.0,10.99,11.00,52.26,32.58,32.59,48.49,49.48,199.99,201.99,0.0 };
    CArray<double> dbl(12);
    for (int i = 0; i < 12; ++i) {
        dbl.setArray(i, ValueDbl[i]);
    }
    dbl.dumpArray();
    cout << "Reverse array" << endl;
    dbl.reverseArray();
    dbl.dumpArray();
    cout << "Move zeros to beginning of array" << endl;
    numberOfZeros = dbl.moveZerosToBeginning();
    cout << numberOfZeros << " zeros found in array" << endl;
    dbl.dumpArray();
    cout << "Move zeros to end array" << endl;
    numberOfZeros = dbl.moveZerosToEnd();
    cout << numberOfZeros << " zeros found in array" << endl;
    dbl.dumpArray();
    cout << "Sort array ascending" << endl;
    dbl.Sort();
    dbl.dumpArray();
    cout << "Sort array descending" << endl;
    dbl.dSort();
    dbl.dumpArray();
    cout << "press any key to continue" << endl;
    int err3 = getchar();
    if (err3 == -1) return err3;
    cout << endl;


#if _DEBUG
    _CrtDumpMemoryLeaks();
#endif
}