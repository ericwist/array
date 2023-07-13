// Array functions
// Author: Eric Wistrand
// Date  : 11/28/2018
// Updated : 07/12/2023

#pragma once
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <array>
#include "type_name.h"
#include "macros.h"

using namespace std;

template<typename T> class CArray {

private:
    int len;
    T* m_array;
    
public:
    CArray(int s)
        :len(s)
    {
        m_array = new T[len];
        memset(m_array, 0, len * (sizeof(m_array) / sizeof(*m_array)));
        
    }

    ~CArray() {
        SAFE_DELETEA(m_array);
    }

    void setArray(int elem, const T& val) {
        m_array[elem] = val;
    }

    //print array in order
    void dumpArray() {
        cout << "Print contents of array" << endl;
        for (int i = 0; i < len; ++i) {
            cout << m_array[i] << " ";
        }
        cout << endl << endl;
    }

    //reverse array
    void reverseArray() {
        if (m_array == nullptr) {
            return;
        }
        T temp;
        T* e = &m_array[len - 1];
        T* b = &m_array[0];

        while (e > b) {
            temp = *e;
            *e-- = *b;
            *b++ = temp;
        }
        return;
    }

    //custom sort descending
    struct {
        bool operator()(const T a, const T b) const
        {
            return b < a;
        }
    }customDesc;

    //sort desc
    void dSort() {
        sort(m_array, m_array + len, customDesc);
    }

    //sort asc, default
    void Sort() {
        sort(m_array, m_array + len);
    }

    //move all zeros to the end of the array
    int moveZerosToEnd() {
        int retcnt = 0;
        if (m_array == nullptr) {
            return retcnt;
        }
        int count = 0;
        for (int i = 0; i < len; ++i)
        {
            if (m_array[i] != 0)
            {
                m_array[count++] = m_array[i];
            }
        }
        retcnt = len - count;
        while (count < len)
        {
            m_array[count++] = 0;
        }
        return retcnt;
    }

    //move all zero to beginning
    //ret num zeros
    int moveZerosToBeginning() {
        int retcnt = 0;
        if (m_array == nullptr) {
            return retcnt;
        }
        int count = len - 1;
        for (int i = len - 1; i > -1; --i)
        {
            if (m_array[i] != 0)
            {
                m_array[count--] = m_array[i];
            }
        }

        while (count >= 0)
        {
            m_array[count--] = 0;
            ++retcnt;
        }
        return retcnt;
    }

};
    //compare
    //insert element into arrary increase memory


