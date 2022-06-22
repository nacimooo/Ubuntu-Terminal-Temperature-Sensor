#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int number_of_seconds)
// delay function to set refresh rate
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

int main(){
	int stop = 0;
	while (stop != 1){
	// set refresh rate
		delay(1000);
	// clear the scree
		system("clear");
	// get temp
		system("sensors | grep Sens");
	}
	return 0;
}

