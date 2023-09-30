#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int>& vetor, int element) {
  int left = 0;
  int right = vector.size() - 1;

  while (left <= right) {
    int half = left + (right - left) / 2;

    // if element is located on half, return its position
    if (vector[half] == element) {
      return half;
    }
    // if element is bigger than the half, discard the left part
    if (vector[half] < element) {
      left = half + 1;
    }
    // if element is lower than the half, discard the right half
    else {
      right = half - 1;
    }
  }
  // if element is not found, return -1
  return -1;
}

