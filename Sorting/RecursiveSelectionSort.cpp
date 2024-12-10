#include <bits/stdc++.h>
using namespace std;

// minimum or maximum to the front
// Time complexity O(n2)
// Space complexity Os(n)
void recursiveSelectionSort(vector<int> &arr, int min)
{
  if (min == arr.size() - 1)
  {
    return;
  }

  int temp = min;

  for (int i = temp; i < arr.size(); i++)
  {
    if (arr[temp] > arr[i])
    {
      temp = i;
    }
  }

  if (temp != min)
  {
    swap(arr[temp], arr[min]);
  }

  recursiveSelectionSort(arr, min + 1);
}

int main()
{

  vector<int> a = {2, 0, 2, 1, 1, 0};

  recursiveSelectionSort(a, 0);

  for (auto it : a)
  {
    cout << it << " ";
  }

  cout << endl;

  return 0;
}