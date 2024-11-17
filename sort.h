#pragma once
#ifndef SORT_H
#define SORT_H

#include <vector>

namespace Hollow
{
    namespace vector
    {
        template<typename T>
        std::vector<T> sort(std::vector<T>& vec)
        {
            for (int i = 0; i < vec.size(); i++)
            {
                for (int j = i + 1; j < vec.size(); j++)
                {
                    if (vec[i] > vec[j])
                    {
                        std::swap(vec[i], vec[j]);
                    }
                }
            }

            return vec;
        }
    }
    namespace type
    {
        template<typename T>
        T* sort(T arr[], int &size)
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = i + 1; j < size; j++)
                {
                    if (arr[i] > arr[j])
                    {
                        std::swap(arr[i], arr[j]);
                    }
                }
            }
            return arr;
        }
    }
}

#endif
