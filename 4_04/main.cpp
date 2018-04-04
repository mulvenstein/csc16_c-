/*
 * purpose : learn vectors / stl library
 *
 * */
#include <iostream>
#include <vector>

using namespace std;

int main(){
    //if you know how many elements you need reseverve space
    vector<int> v1;//(12);
    v1.reserve(12);
    //v1.resize(12); starts pushing from position 12
    cout << "size of v1 : " << v1.size() << endl;
    //v1[0] = 1; //segmentation fault. no size set and trying to put val
    
    /* push 12 items into v1 */
    const int N = 12;
    for(int i = 0; i < N; ++i){
	cout << "\t\nv1 size at index " << i << " : " << v1.size();
	cout << "\t\nv1 capacity at index " << i << " : " << v1.capacity();
        v1.push_back(i+1*2);
    }
    
    /* printing */
    for(int i=0; i<v1.size(); ++i){
        cout << "v1[" << i << "] = " << v1[i] << endl;
    }
    return 0;
}
