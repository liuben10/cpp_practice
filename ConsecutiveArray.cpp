/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "ConsecutiveArray.h"

using namespace std;

int longestRun(int *arg, int N) {
    
    int prev = -15;
    int currentRun = 0;
    int longestRun = 0;
    for(int i = 0; i < N; i++) {
        if (arg[i] != prev) {
            currentRun += 1;
        } else {
            if (currentRun > longestRun) {
                longestRun = currentRun;
            }
            currentRun = 0;
        }
        prev = arg[i];
    }
    return longestRun;
}