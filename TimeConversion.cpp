#include <iostream>
#include <string>

using namespace std;

void timeConversion(string& s) {
	//making char hh in to int hh
	int hourTime = (s[0] - '0') * 10 + (s[1] - '0') * 1;

	//checking if its AM or PM
	if (s[8] == 'A') {
		//checking if its midnight
		if (hourTime == 12) {
			s.replace(0, 2, "00");
		}
	}
	else {
		if (hourTime != 12) {
			string intToString = to_string(hourTime + 12);
			s.replace(0, 2, intToString);
		}
	}

	//removing AM or PM
	s.erase(8, 9);
}
int main()
{
	string time;
	getline(cin, time);

	timeConversion(time);

	cout << time << "\n";

	return 0;
}
