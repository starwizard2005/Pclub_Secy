#include <iostream>
#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int t;
    srand(time(0));
    t = rand()%10;
    for (int i = 0;i < t;i++){
        cout << rand()%1000 << " " << rand()%1000 << endl;
    }
}


