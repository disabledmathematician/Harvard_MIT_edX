#import <iostream>
#import <vector>
/* Charles Truscott. Quick C++ practice carrying on a year after 6.0001 */


long double CTpow(long double x, int n) {
	int count = n;
	long double r = 1;
	while(count > 0) {
		r *= x;
		count -= 1;
	}
	return r;
}
long double MIT_NewtonRaphson_nthroot(long double x, long double n) {
	return 0;
	
}

long double MIT_BisectionSearch_nthroot(long double x, long double n) {
	long double high = x;
	long double low = 0.000000;
	long double guess = (high + low) / 2.000000;
	while((CTpow(guess, n) != x)) {
//		std::cout << "guess: " << guess << " high: " << high << " low: " << low << std::endl;
		if ((CTpow(guess, n) > x)) {
			high = guess;
		}
		if ((CTpow(guess, n) < x)) {
			low = guess;
		}
		guess = (high + low) / 2.000000;
	}
	return guess;
    	
	

}


int main(int argc, char *argv[])
{
	std::cout << "3 to 3rd power is " << CTpow(3, 3) << std::endl;
	std::cout << "And using Bisection Search, a searching algorithm, the 3rd root of 27 is " << MIT_BisectionSearch_nthroot(CTpow(3, 3), 3) << std::endl;
	std::cout << "Charles Truscott" << std::endl;
}

/*

3 to 3rd power is 27
And using Bisection Search, a searching algorithm, the 3rd root of 27 is guess: 13.5 high: 27 low: 0
guess: 6.75 high: 13.5 low: 0
guess: 3.375 high: 6.75 low: 0
guess: 1.6875 high: 3.375 low: 0
guess: 2.53125 high: 3.375 low: 1.6875
guess: 2.95312 high: 3.375 low: 2.53125
guess: 3.16406 high: 3.375 low: 2.95312
guess: 3.05859 high: 3.16406 low: 2.95312
guess: 3.00586 high: 3.05859 low: 2.95312
guess: 2.97949 high: 3.00586 low: 2.95312
guess: 2.99268 high: 3.00586 low: 2.97949
guess: 2.99927 high: 3.00586 low: 2.99268
guess: 3.00256 high: 3.00586 low: 2.99927
guess: 3.00092 high: 3.00256 low: 2.99927
guess: 3.00009 high: 3.00092 low: 2.99927
guess: 2.99968 high: 3.00009 low: 2.99927
guess: 2.99989 high: 3.00009 low: 2.99968
guess: 2.99999 high: 3.00009 low: 2.99989
guess: 3.00004 high: 3.00009 low: 2.99999
guess: 3.00001 high: 3.00004 low: 2.99999
guess: 3 high: 3.00001 low: 2.99999
guess: 2.99999 high: 3 low: 2.99999
guess: 3 high: 3 low: 2.99999
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
guess: 3 high: 3 low: 3
3
Charles Truscott

[Program finished]

*/