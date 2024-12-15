#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int low, int high, int target)
{
  if (low > high)
  {
    return -1;
  }

  int mid = low + (high - low) / 2;

  if (arr[mid] == target)
  {
    return mid;
  }

  if (target > arr[mid])
  {
    return binarySearch(arr, mid + 1, high, target);
  }
  else
  {
    return binarySearch(arr, low, mid - 1, target);
  }
}

int main()
{

  vector<int> a = {9, 46, 47, 87, 91, 97};

  cout << binarySearch(a, 0, a.size() - 1, 97) << endl;
}