/*
 * printlines.cpp
 *
 *  Created on: Jul 26, 2014
 *      Author: kaiyin
 */
#include "printlines.h"

// [[Rcpp::export]]
void printlines(std::string fn) {
	std::ifstream infile(fn.c_str());
	while(infile) {
		std::string l;
		std::getline(infile, l);
		std::cout << l << "\n";
	}
}
