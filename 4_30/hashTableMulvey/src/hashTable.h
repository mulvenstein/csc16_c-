/*
 * hashTable.h
 *
 *  Created on: Apr 30, 2018
 *      Author: h702546919
 */

#ifndef HASHTABLE_H_
#define HASHTABLE_H_

#include <vector>

template<class K, class D>
struct dataPair {
	K key;
	D data;
};

template<class K, class D>
class HashTable {
 public:
	typedef std::vector<dataPair<K,D> > BucketType;
	HashTable( int size ){
		m_tbl.resize( size );
	}

	int size() { return m_tbl.size(); }

	D &operator[](K key) {
		// retrieves index of key
		int index = key % m_tbl.size();
		// gets bucket at index(key)
		BucketType &bucket = m_tbl[index];
		// traverse bucket for key desired
		for(int i=0; i < bucket.size(); ++i) {
			if( key == bucket[i].key ) {
				return bucket[i].data;
			}
		}
		// desired element not found
		dataPair<K,D> new_pair = { key, D() };
		bucket.push_back(new_pair);

		return (bucket[ bucket.size() - 1 ]).data;

	}
 private:
	std::vector<BucketType> m_tbl;
};



#endif /* HASHTABLE_H_ */
