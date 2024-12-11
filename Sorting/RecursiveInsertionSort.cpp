#include <bits/stdc++.h>
using namespace std;

// sorting playing cards in your hand
// Time complexity O(n2) in worst case and average case.
// Time complexity O(n) if array already sorted.
// Space complexity O(n).
void recursiveInsertionSort(vector<int> &arr, int max)
{

  if (arr.size() == max)
  {
    return;
  }

  int temp = max;

  while (temp > 0 && arr[temp - 1] > arr[temp])
  {
    swap(arr[temp - 1], arr[temp]);
    temp--;
  }

  recursiveInsertionSort(arr, max + 1);
}

int main()
{

  vector<int> a = {2, 0, 2, 1, 1, 0};

  recursiveInsertionSort(a, 1);

  for (auto it : a)
  {
    cout << it << " ";
  }

  cout << endl;

  return 0;
}