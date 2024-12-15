#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target)
{

  int low = 0;
  int high = arr.size() - 1;
  int mid;

  while (low <= high)
  {

    mid = low + (high - low) / 2;

    if (arr[mid] == target)
      return mid;

    if (target > arr[mid])
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }

  return -1;
}

int main()
{

  vector<int> a = {9, 46, 47, 87, 91, 97};

  cout << binarySearch(a, 97) << endl;
}