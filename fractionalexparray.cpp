#import <vector>
#import <iostream>
#import <math.h>
// Charles Truscott
int main(int argc, char *argv[])
{
	long double onethird = 0.333333;
	long double onesixth = 0.166667;
	long double oneninth = 0.111111;
	long double fracexp[] {onethird, onesixth, oneninth};
	long double n[] {1990, 1993, 1955};
	for (int c = 0; c < 3; c++) {
		std::cout << n[c] << " to the " << fracexp[c] << " power is " << powf(n[c], fracexp[c]) << "\n";
	}
}