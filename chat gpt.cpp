#include <iostream>
#include <vector>

int findLastOccurrenceOrMaxIndex(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int lastOccurrence = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            lastOccurrence = mid;
            left = mid + 1;  // Continue searching on the right side
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // If the target value was found at least once, return its last occurrence
    if (lastOccurrence != -1) {
        return lastOccurrence;
    }

    // If the target value was not found, return the maximum index of the lowest value
    return right;
}

int main() {
    std::vector<int> sortedArray = {1, 2, 2, 3, 4, 4, 4, 4, 6};

    int targetValue =5 ;
    int result = findLastOccurrenceOrMaxIndex(sortedArray, targetValue);

    if (result >= 0) {
        std::cout << "Last occurrence of " << targetValue << " is at index " << result << std::endl;
    } else {
        std::cout << "Value " << targetValue << " not found. Maximum index of the lowest value: " << -(result + 1) << std::endl;
    }

    return 0;
}

