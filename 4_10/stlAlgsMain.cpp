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

int main() {
    const int numOfRandVals = 10;

    vector<Rock> rockVec;
    for(int i =0; i<numOfRandVals; i++){
	Rock rockTemp( rand() % 100 + 1);
        rockVec.push_back( rockTemp );
    }
    display("unsorted rock list ", rockVec);
    sort(rockVec.begin(), rockVec.end() );
    display("sorted rock list ", rockVec);


    cout << std::fixed << std::setprecision(2);
    vector<float> vec;
    srand (time(NULL)); /* GENERATES RANDOM SEED */ 
    for(int i=0; i<numOfRandVals; i++)
	vec.push_back( ( rand() % 1000 + 1 ) / (double)( rand() % 10 + 1 ) );
    
    display("unsorted",vec);    

    sort( vec.begin(), vec.end() );
    
    display("sorted", vec);    

    return 0;
}
