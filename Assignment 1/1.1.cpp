<<<<<<< HEAD
/*

First CPP program.
*/

#include<iostream>
using namespace std;

int main() {

	double mathMarks, chemMarks, phyMarks;
	cin >> mathMarks >> chemMarks >> phyMarks;
	double avgPercentage = (mathMarks + chemMarks + phyMarks) / 3;

	if (mathMarks < 40 || chemMarks < 40 || phyMarks < 40 || avgPercentage < 60) {
		cout << "Final Percentage: " << avgPercentage << endl;
		cout << "Status: Fail" << endl;
		cout << "Letter Grade: F" << endl;
	} else {
		cout << "Final Percentage: " << avgPercentage << endl;
		cout << "Status: Pass" << endl;
		if (avgPercentage >= 90) {
			cout << "Letter Grade: A" << endl;
		} else if (avgPercentage >= 80 && avgPercentage < 90) {
			cout << "Letter Grade: B" << endl;
		} else if (avgPercentage >= 70 && avgPercentage < 80) {
			cout << "Letter Grade: C" << endl;
		} else if (avgPercentage >= 60 && avgPercentage < 70) {
			cout << "Letter Grade: D" << endl;
		}
	}
}
=======
/*

First CPP program.
*/

#include<iostream>
using namespace std;

int main() {

	double mathMarks, chemMarks, phyMarks;
	cin >> mathMarks >> chemMarks >> phyMarks;
	double avgPercentage = (mathMarks + chemMarks + phyMarks) / 3;

	if (mathMarks < 40 || chemMarks < 40 || phyMarks < 40 || avgPercentage < 60) {
		cout << "Final Percentage: " << avgPercentage << endl;
		cout << "Status: Fail" << endl;
		cout << "Letter Grade: F" << endl;
	} else {
		cout << "Final Percentage: " << avgPercentage << endl;
		cout << "Status: Pass" << endl;
		if (avgPercentage >= 90) {
			cout << "Letter Grade: A" << endl;
		} else if (avgPercentage >= 80 && avgPercentage < 90) {
			cout << "Letter Grade: B" << endl;
		} else if (avgPercentage >= 70 && avgPercentage < 80) {
			cout << "Letter Grade: C" << endl;
		} else if (avgPercentage >= 60 && avgPercentage < 70) {
			cout << "Letter Grade: D" << endl;
		}
	}
}
>>>>>>> f0ea474 (Adding assignments)
