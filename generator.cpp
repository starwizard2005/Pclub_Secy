#include "testlib.h"
#include <time.h>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
	int max_n = atoi(argv[1]);
	int n = rnd.next(2, max_n);
	cout<<n<<endl;
	for (int i = 0;i<n-1;i++){
        cout << rnd.next(0,10000) << " ";
    }
	cout<< rnd.next(0,10000) << endl;
    return 0;
}


