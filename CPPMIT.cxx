#import <iostream>
#import <vector>
#import <math.h>
/* Charles Truscott. I love you Mum, Dad and Taigs */


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
	long double n2 = n - 1.000000;
	long double g = ((pow(x, n) - x) / (n * (pow(x, n2))));
	while(((pow(g, n)) - x)>= 0.00000001){
		g = g - ((pow(g, n) - x) / (n * (pow(g, n2))));
	}
	std::cout << x << " to the 1/" << n << " is " << g << std::endl;
	std::cout << g << " to the " << n << " is " << pow(g, n) << std::endl;
	return g;
	
}

long double MIT_BisectionSearch_nthroot(long double x, long double n) {
	long double high = x;
	long double low = 0.000000;
	long double guess = (high + low) / 2;
	while(((round(pow(guess, n)) != x))) {
//		std::cout << "guess: " << guess << " high: " << high << " low: " << low << std::endl;
		if ((pow(guess, n) > x)) {
			high = guess;
			guess = (high + low) / 2;
		}
		else if ((pow(guess, n) < x)) {
			low = guess;
			guess = (high + low) / 2;
		}
		
	}
	
	return guess;
}


int main(int argc, char *argv[])
{
	long double nthr = MIT_BisectionSearch_nthroot(1990, 3);
	std::cout << "The cube root of 1990 is " << nthr << std::endl;
	std::cout << nthr << " to the " << "3" << " is " << pow(nthr, 3) << "\n";
	std::cout << "And: \n";
	MIT_NewtonRaphson_nthroot(1955, 93);
	std::cout << "Charles Truscott, born 1993" << std::endl;
	std::cout << "Tai Truscott, born 1990" << std::endl;
	std::cout << "Mark Watters, born 1955" << std::endl;
}

/* The cube root of 1990 is 12.5787
12.5787 to the 3 is 1990.25
And:
1955 to the 1/93 is 1.0849
1.0849 to the 93 is 1955
Charles Truscott, born 1993
Tai Truscott, born 1990
Mark Watters, born 1955

[Program finished] */ 