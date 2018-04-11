/*
 *    testing efficiency with clock function
 * */

#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    time_t begin = clock();
    std::vector <int> intVec;
    /* measue ... */
    for(int i=0; i<10000000; i++) { intVec.insert(intVec.begin(), i); }

    time_t end = clock();
    time_t elapsed = end - begin;
    cout << "Clocks: " << elapsed << endl;
    cout << "Duration: " << (double)elapsed / CLOCKS_PER_SEC << endl;
    return 0;
}
