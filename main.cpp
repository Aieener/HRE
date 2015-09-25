// My main file for HR_MO+
// Data: July27 2015
// Authur: Yuding Ai
#include "MC.h"
#include <iostream>
using namespace std;

int main()
{
	double start = clock();

	// ======================= Plotting the final config ========================
	vector<HR> VR,HR;
	MC m(1E9L,10,128,128,0.21,0.4);
	m.MCRUN();
	VR = m.getVRodlist();
	HR = m.getHRodlist();
	m.plot(VR,HR);
	// ======================= get data for N vs z ========================
	// m.Zvs_();
	// ======================= end of simulation, print out the time =======
	double end = clock();
	cout <<"This simulation takes "<< (double(end-start)/CLOCKS_PER_SEC)<<endl;
	return 0;
}