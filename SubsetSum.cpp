#include <iostream>
#include <vector>
#include "SubsetSum.h"

using namespace std;

int subsetSumNaive(int elems[], int i, int target) {
    if (target == 0) {
        return 1;
    } else if (i == 0) {
        return 0;
    } else if (elems[i-1] > target) {
            return subsetSumNaive(elems, i-1, target);
    } else {
        return subsetSumNaive(elems, i-1, target - elems[i-1])
                + subsetSumNaive(elems, i-1, target);
    }
}

void printPath(vector< int > currentPath) {
    for(int i = 0; i < currentPath.size(); i++) {
        cout << currentPath[i] << ", ";
    }
    cout << "\n";
}

// Simple DFS to find all possible paths in my table of elements I // decided to keep
void printAllPaths(vector< vector < int > > table, int i, int target, vector< int > currentPath) {
    if (target == 0) {
        printPath(currentPath);
    } else if (i == 0) {
        return;
    } else {
        vector< int > kept = currentPath;
        if (table[i][target] != 0) {
            kept.push_back(table[i][target]);
            printAllPaths(table, i-1, target - table[i][target], kept);
        }
        
        printAllPaths(table, i-1, target, currentPath);
    }
}

int subsetSumDynamic(int elems[], int N, int target) {
    vector < vector < int > > table(N+1,vector< int >(target+1, 0));
    vector < vector < int > > keeps(N+1,vector< int >(target+1, 0));
    
    for(int i = 0; i <= N; i++) {
        table[i][0] = 1;
    }

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= target; j++) {
            if (elems[i-1] > j) {
                // Can only skip the current solution
                table[i][j] = table[i-1][j];
            } else {
                int keep = table[i-1][j - elems[i-1]];
                int skip = table[i-1][j];
                keeps[i][j] = elems[i-1];
                table[i][j] = keep + skip;
            }
        }
    }
    printAllPaths(keeps, N, target, vector< int >());
    return table[N][target];
}
