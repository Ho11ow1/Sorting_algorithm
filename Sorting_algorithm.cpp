#include "./sort.h"

void vector()
{
    std::vector<uint32_t> nums = { 1, 7, 3, 8, 2 };
    Hollow::vector::sort(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        printf("%d%s", nums[i], " ");
    }
}

void type()
{
    char arr[] = { 'a', 'c', 'b', 'f', 'd' };
    int size = sizeof(arr) / sizeof(arr[0]);
    Hollow::type::sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%c %s", arr[i], "");
    }
}

int main(int argc, char** argv[])
{
    vector();
    printf("\n\n");
    type();

    return 0;
}
