/* experementing with STL
 * algorithms :)
 * */

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Rock {
    public:
	Rock(int hardness) { m_hardness = hardness; }
	bool operator<(const Rock &rhs) const  { return m_hardness  < rhs.m_hardness; }
	int getHardness() const { return m_hardness; }
        bool operator>(const Rock &rhs) const
	  { return !operator<(rhs); }
    private:
	int m_hardness;
};
ostream &operator<<( ostream&out, const Rock &r ){
    out << r.getHardness() ;
}

template <class T>
void display( string title, const vector<T> vec ) {
    cout << title << "\n";
    for(int i=0; i<vec.size(); i++)
	cout << "\t" << i << " : " << vec[i] << endl;
}

template <class Type>
void bubbleSort( vector<Type> &v1 ) {
    Type temp=0;
    bool sorted = true;
    for(int i=0; i<v1.size()-1; i++){
	sorted = true;
        for(int j=0; j<v1.size()-1-i; j++){
	    if(v1[j+1] < v1[j]) {
		temp = v1[j+1];
		v1[j+1] = v1[j];
		v1[j] = temp;
                sorted = false; 
	    } 
       	}
        if(sorted) break;
    } 
}

int main() {
    const int numOfRandVals = 10;

    vector<Rock> rockVec;
    for(int i =0; i<numOfRandVals; i++){
	Rock rockTemp( rand() % 100 + 1);
        rockVec.push_back( rockTemp );
    }
    display("unsorted rock list ", rockVec);
    //sort(rockVec.begin(), rockVec.end() );
    bubbleSort( rockVec);
    display("sorted rock list ", rockVec);


    cout << std::fixed << std::setprecision(2);
    vector<float> vec;
    srand (time(NULL)); /* GENERATES RANDOM SEED */ 
    for(int i=0; i<numOfRandVals; i++)
	vec.push_back( ( rand() % 1000 + 1 ) / (double)( rand() % 10 + 1 ) );
    
    //display("unsorted",vec);    

    //sort( vec.begin(), vec.end() );
    //display("sorted", vec);    

    return 0;
}
