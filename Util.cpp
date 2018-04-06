/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Util.h"
#include <string>
#include <sstream>

using namespace std;

string padToLength(int padLength, string padding) {
    ostringstream oss;
    for(int i = 0; i < padLength; i++) {
        oss << padding;
    }
    return oss.str();
}