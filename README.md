# Sorting_algorithm

A simple yet effective sorting algorithm in `C++` using templates to support both vectors and arrays.

## Features

* Template-based implementation
* Two distinct sorting implementations:
  * `vector_sort`: Specialized for std::vector
  * `type_sort`: Works with standard arrays
* Simple selection sort algorithm
* Header-only implementation
* Namespace organization for clean code structure

## Usage Example
```cpp
#include "sort.h"

// Vector sorting example
void vectorExample() 
{
    std::vector<uint32_t> nums = { 1, 7, 3, 8, 2 };
    Hollow::vector_sort::sort(nums);
    
    for (int i = 0; i < nums.size(); i++)
    {
        printf("%d%s", nums[i], " ");
    }
}

// Array sorting example
void arrayExample() 
{
    char arr[] = { 'a', 'c', 'f', 'b' };
    int size = sizeof(arr) / sizeof(arr[0]);
    Hollow::type_sort::sort(arr, size);

    for (int i = 0; i < size; i++) 
    {
        printf("%c %s", arr[i], "");
    }
}
```
## Installation Guide

### Option 1: Direct Include
   1. Download `sort.h`
   2. Add it to your project
   3. Include the header: `#include "sort.h"`

### Option 2: Git Clone
```bash
git clone https://github.com/Ho11ow1/Sorting_algorithm
```

### Troubleshooting
* Ensure `sort.h` is in your include path
* Check C++ version compatibility
* Verify STL is available
