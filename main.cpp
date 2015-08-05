#include "coord.hpp"
#include <iostream>

using namespace std;


int main(){
	Coord coord;
	float ac, alt;
	float t0 = 100;
	coord.setTime(t0);
	coord.setRef_1(0, 1, 1, 0, 45);
	coord.setRef_2(0, 2, 2, 0, 46);
	coord.setRef_3(0, 3, 3, 0, 47);
	
	for(int i=1; i<100; i++){
		coord.getHCoords(0, 1, (float)i , &ac, &alt);
		cout << ac << " " << alt << endl;
	}





	return 0;
}




