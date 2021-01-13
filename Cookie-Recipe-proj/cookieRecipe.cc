#include <iostream>


int main() {
//declare your variables

		int numCookies;
		double COS = 1.5;
		double COB = 1;
		double COF = 2.7;
		int recipeNumCookies = 48;
		double cookieBatchCOS;
		double oneCookieCOS;
		double cookieBatchCOB;
		double oneCookieCOB;
		double cookieBatchCOF;
		double oneCookieCOF;
	
	std::cout << "How many cookies do you want to bake? ";

	std::cin >> numCookies;

/* numCookies is the user input that is multiplied by the individual unit of each 
recipe that is required to make one cookie */

//It is then multiplied by the number of cookie the user inputs to give the correct measurements of each ingredient.

	oneCookieCOS = COS / recipeNumCookies;
	
	cookieBatchCOS = oneCookieCOS * numCookies;
    
	std::cout << "Cups of Sugar: " << cookieBatchCOS << "\n";
	
	
	oneCookieCOB = COB / recipeNumCookies;

	cookieBatchCOB = oneCookieCOB * numCookies; 

	
	std::cout << "Cups of Butter: " << cookieBatchCOB << "\n";

	oneCookieCOF = COF / recipeNumCookies;

	cookieBatchCOF = oneCookieCOF * numCookies;

	std::cout << "Cups of Flour: " << cookieBatchCOF << "\n";
		    
	            



}



