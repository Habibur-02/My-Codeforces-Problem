#include <iostream>
#include <vector>

using namespace std;

void findPairs(const vector<int>& ar) {
    int n = ar.size();

    for (int j = 0; j < n; ++j) {
        int i = (j * ar[j] + ar[j] - 1) / ar[j];
        if (i < j && ar[i] * ar[j] == i * j) {
            cout << "Pair found: (" << i << ", " << j << ")" << endl;
        }
    }
}

int main() {
    vector<int> ar = {3, 2, 1, 4};// Replace this with your array
    findPairs(ar);
    return 0;
}
