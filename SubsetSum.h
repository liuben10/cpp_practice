/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SubsetSum.h
 * Author: benja
 *
 * Created on May 12, 2018, 3:31 PM
 */

#include <vector>

#ifndef SUBSETSUM_H
#define SUBSETSUM_H

using namespace std;

int subsetSumNaive(int elems[], int i, int target);

void printPath(vector< int > currentPath);

void printAllPaths(vector< vector < int > > table, int i, int target, vector< int > currentPath);

int subsetSumDynamic(int elems[], int N, int target);
#endif /* SUBSETSUM_H */