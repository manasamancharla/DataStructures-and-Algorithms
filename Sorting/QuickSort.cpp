#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> &arr, int low, int high)
{

  int pivot = arr[low];
  int i = low;
  int j = high;

  while (i < j)
  {

    while (arr[i] <= pivot && i < high)
    {
      i++;
    }

    while (arr[j] > pivot && j > low)
    {
      j--;
    }

    if (i < j)
    {
      swap(arr[i], arr[j]);
    }
  }

  swap(arr[low], arr[j]);
  return j;
}

// pivot needs to be chosen properly
// Time complexity O(nlogn)
// Time complexity in worst case O(n2), smallest or largest element as pivot
// Space complexity O(n)
void quickSort(vector<int> &arr, int low, int high)
{

  if (low >= high)
  {
    return;
  }

  int pivot = getPivot(arr, low, high);
  quickSort(arr, low, pivot - 1);
  quickSort(arr, pivot + 1, high);
}

int main()
{

  vector<int> a = {52, 46, 24, 13, 20, 9};

  quickSort(a, 0, a.size() - 1);

  for (auto it : a)
  {
    cout << it << " ";
  }

  cout << endl;

  return 0;
}