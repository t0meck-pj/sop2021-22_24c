#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

using namespace std;

void funkcja(int);
int main() {

	signal (SIGUSR1, funkcja);

	cout << "PID = " << getpid() << endl;
	
	sleep(1);
	raise(SIGUSR1);

	while (true) {
		cout << "PID = " << getpid() << endl;
		sleep(1);
	}

	return 0;
}

void funkcja(int sygnal){

	cout << "Dostalem sygnal." << endl;
	exit(1);
}
