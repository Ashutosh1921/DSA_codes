#include <bits/stdc++.h>
using namespace std;

// solution
// this is optimised solution for the peak element in mountain array.
int search(vector<int> arr, int h, int l)
{

    while (h > l)
    {
        int mid = (h + l) / 2;

        if (arr[mid] > arr[mid + 1])
        {
            return search(arr, mid, l);
        }
        else
        {
            return search(arr, h, mid + 1);
        }
    }

    return l;
};
int peakIndexInMountainArray(vector<int> &arr)
{
    int cc = arr.size();
    return search(arr, cc - 1, 0);
}

;