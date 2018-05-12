#include <iostream>
#include "SubsetSum.h"

using namespace std;

int main() {
    int testIn[] = {2, 4, 5, 8, 9, 1, 3};
    int testTarget = 13;
    int dynamicSolution = subsetSumDynamic(testIn, 7, testTarget);
    cout << "Number of Subsets: " << dynamicSolution << "\n";
}
