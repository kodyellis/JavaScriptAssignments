#include <iostream>
using namespace std;

const int MAX = 1000;

int main () {
	int present = 1; 
	int past = 0;
	int future = 0;
	while (present < MAX) {
		cout << present;
		future = present + past;
		past = present;
		present = future;
	}
	return 0;
}
