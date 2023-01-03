#include <iostream>
#include <math.h>
// Charles Truscott Watters


long double find_root(long double number, long double p) {

  long double power = number;
  long double high = number;
  long double low = 0;
  long double guess = (high + low / 2.0);
  long double eps = 0.1;
  while((round(pow(guess, p)) != number)) {
    //    std::cout << high << " " << low << " " << guess << std::endl;
    if (pow(guess, p) > number) {
      high = guess;
    }
    if (pow(guess, p) < number) {
      low = guess;
    }
    guess = (high + low) / 2.0;

  }
  //  std::cout << guess << " to the " << p << " power is " << pow(guess, p) << std::endl;
  return guess;

}
int main(){
  long double n[] {3, 6, 9, 13};
  for (int j = 1; j <= 55; j++) {
    for(int i = 0; i <= 3; i++) {
      double temp = n[i];
      std::cout << "This will find the " << temp << " root of " << j << std::endl;
      std::cout << temp << " root of " << j << " is ";
      double root = find_root(j, temp);
      std::cout << root << std::endl;
    }
  }
}
