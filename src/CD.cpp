//============================================================================
// Name        : CD.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {
	int numberOfCdsA;
	int numberOfCdsI;
	int tempCat;
	int count;
	//int max = 0;
	unordered_map<int, int> sameCat;
	//int lEnd = time(0);
	//map<int, int>::iterator ptr;
	while (true) {
		count =0;
		cin >> numberOfCdsA;
		cin >> numberOfCdsI;
		if (numberOfCdsA == 0) {
			break;
		}
		for (int i = 0; i < numberOfCdsA; i++) {
			cin >> tempCat;
			sameCat[tempCat]++;
//			if(i == (numberOfCdsA-1)  ){
//				max = tempCat;
//			}

		}
		for (int i = 0; i < numberOfCdsI; i++) {
			cin >> tempCat;
			if (sameCat.count(tempCat) == 1) {
				count++;
			}
		}
		sameCat.clear();
		cout << count << endl; // prints !!!Hello World!!!
	}
	return 0;
}
