#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int l, int r, int x)
{
    while (l <= r) {
        int m = (r + l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    std::vector<int> arr = { 2, 3, 4, 10, 40 };
    int x = 2;
    int result = binarySearch(arr, 0, arr.size() - 1, x);
    if (result == -1)
        std::cout << "Element is not present in array";
    else
        std::cout << "Element is present at index " << result;
    return 0;
}
